#include <stdio.h>
int main() {
	int *p;
	int a = 90;
	p = &a;  //给p初始化
	*p = 10;//把10赋值给p所指的存储空间
	printf("%d",*p);
	_getch();
	return 0;
}