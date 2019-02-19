#include <stdio.h>
int main() {
	/*
	使用指针遍历数组
	*/
	int ages[5] = { 10, 4, 9, 44, 99 };
	int *p;

	// 指针变量P指向了数组的首地址

	p = &ages[0];


	for (int i = 0; i < 5; i++)
	{

		printf("ages[%d] = %d\n", i, *(p + i));
	}
	_getch();
	return 0;
}