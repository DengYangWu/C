#include <stdio.h>
#include <iostream>

int main() {
	int a = 100;
	char str[20] = "c.biancheng.net";
	printf("%#X, %#X\n", &a, str);

	int v = 15, b = 99, c = 222;
	int *p = &v;  //����ָ�����
	*p = b;  //ͨ��ָ������޸��ڴ��ϵ�����
	c = *p;  //ͨ��ָ�������ȡ�ڴ��ϵ�����
	printf("%d, %d, %d, %d\n", v, b, c, *p);

	system("pause");
	return 0;

}

