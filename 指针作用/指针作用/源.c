#include <stdio.h>
int main() {
	int *p;
	int a = 90;
	p = &a;  //��p��ʼ��
	*p = 10;//��10��ֵ��p��ָ�Ĵ洢�ռ�
	printf("%d",*p);
	_getch();
	return 0;
}