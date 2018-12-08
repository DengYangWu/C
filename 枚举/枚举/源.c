#include <stdio.h>
#include <stdlib.h>

int main() {
	enum weekday {mon,t,s} work;

	work = s;   //把s赋给枚举类型变量
	printf("枚举：%d",work);
	system("pause");
}