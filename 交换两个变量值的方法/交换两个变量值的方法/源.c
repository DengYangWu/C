#include <stdio.h>
int main() {
	/*采用加减法进行值得交换交换b和a的值*/
	int b = 2,a=3;
	//b = a - b;
	//a = a - b;
	//b = a + b;
	/*采用按位异或的位方式交换b和a的值*/
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d\n%d",b,a);
	_getch();
	return 0;
}