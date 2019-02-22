#include <stdio.h>
#include <stdlib.h>

main() {
	int x = 1;
	int *ip;
	ip = &x;
	int y;
	y = *ip + 10;
	printf("%d",strlen("hello"));
	if (x<=y) {}
	getch();
}

int strlen(char *s) {
	int n;
	for (n = 0; *s != '0';s++) {
		n++;
	}
	return n;
}