#include <sys\stat.h>
#include <io.h>
#include <fcntl.h>
#include <share.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX_CLU_BYTES 65536
FILE *fo;
int fh;
__int64 offs, offs1;
__int64 rvi64;
int rv, wrv;
unsigned char buf[MAX_CLU_BYTES];
char ofn[_MAX_PATH];
char offstr[80];
void strcpybutcomma(char *t, char *s) {
	char c;

	while (1) {
		c = *s++;
		if (',' != c) *t++ = c;
		if (0 == c) break;
	}

}
void main(int argc, char **argv) {
	if (argc < 3) {
		printf("Copy File Tail.\n");
		printf("Usage:\n");
		printf("    cft filename.ext offset_begin[-offset_end]\n");
		printf("Copy filename.ext offset_begin[-offset_end] to offset_begin[-offset_end]-filename.ext\n");
		printf("Note: Byte at offset_end is NOT included.\n");
		printf("Example:\n");
		printf("    cft abc.rar 12345\n");
		printf("Copy abc.rar offset 12345-end to 12345-abc.rar\n");
		printf("    cft abc.rar 123-12345\n");
		printf("Copy abc.rar offset 123-12345 to 123-12345-abc.rar\n");
		printf("    cft abc.rar 0xAB-0xCD\n");
		printf("Copy abc.rar offset 0xAB-0xCD to 0xAB-0xCD-abc.rar\n");
		_getch();
		return;
	}
	strcpybutcomma(offstr, argv[2]);
	rv = scanf_s(offstr, "%I64i-%I64i", &offs, &offs1);
	if (rv == 0) {
		printf("offset %s is not number\n", argv[2]);
		return;
	}
	fh = _sopen(argv[1], _O_BINARY | _O_RDONLY | _O_RANDOM, _SH_DENYWR);
	if (fh == -1) {
		printf("_sopen %s errno=%d\n", argv[1], errno);
		return;
	}
	if (rv == 1) {
		offs1 = _filelengthi64(fh);
		if (offs1 == -1i64) {
			printf("%I64=_filelengthi64 errno=%d\n", offs1, errno);
			_close(fh);
			return;
		}
	}
	else {//rv==2
		if (offs1 < offs) {
			printf("%s offset_begin>offset_end error\n", argv[2]);
			_close(fh);
			return;
		}
	}
	rvi64 = _lseeki64(fh, offs, SEEK_SET);
	if (rvi64 != offs) {
		printf("%I64u=_lseeki64 %I64u errno=%d\n", rvi64, offs, errno);
		_close(fh);
		return;
	}
    printf(ofn, "%s-", offstr);
	strcat(ofn, argv[1]);
	fo = fopen(ofn,"wb");
	if (fo == NULL) {
		_close(fh);
		printf("fopen %s error\n", ofn);
		return;
	}
	printf("\n%I64u\r", offs);
	while (1) {
		rv = _read(fh, buf, (unsigned int)__min(offs1 - offs, MAX_CLU_BYTES));
		if (rv == 0) break;//
		if (rv < 0) {
			fclose(fo);
			_close(fh);
			printf("_read %s offset %I64u error\n", argv[1], offs);
			return;
		}
		wrv = fwrite(buf, 1, rv, fo);
		if (wrv != rv) {
			fclose(fo);
			_close(fh);
			printf("fwrite %s error\n", ofn);
			return;
		}
		else {
			offs += rv;
			printf("%I64u\r", offs);
			if (offs >= offs1) break;//
		}
	}
	fclose(fo);
	_close(fh);
	printf("Copy %s offset %s to %s OK.\n", argv[1], argv[2], ofn);
	_getch();
	return 0;
}