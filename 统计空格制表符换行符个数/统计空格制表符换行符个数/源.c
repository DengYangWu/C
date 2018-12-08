#include <stdio.h>


int main() {
	int c, nb, nt, nl;
	nb = 0;    /*number of blanks*/
	nt = 0;    /*number of tabs*/
	nl = 0;    /*number of newlines*/
	while ((c=getchar())!=EOF) {
		if (c == ' ') {
			++nb;
		}
		if (c == '\t') {
			++nt;
		}
		if (c == '\n') {
			++nl;
		}

	}
	printf("你输入的空格为： %d 个\n 你输入的tab为： %d 个\n 你输入的换行为： %d 个\n", nb, nt, nl);
	getch();
}