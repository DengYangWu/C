#include <stdio.h>
#include <iostream>

int main() {
	int a = 100;
	char str[20] = "c.biancheng.net";
	printf("%#X, %#X\n", &a, str);

	int v = 15, b = 99, c = 222;
	int *p = &v;  //定义指针变量
	*p = b;  //通过指针变量修改内存上的数据
	c = *p;  //通过指针变量获取内存上的数据
	printf("%d, %d, %d, %d\n", v, b, c, *p);

	system("pause");
	return 0;

}

