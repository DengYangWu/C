#include <stdio.h>
int main() {
	/*���üӼ�������ֵ�ý�������b��a��ֵ*/
	int b = 2,a=3;
	//b = a - b;
	//a = a - b;
	//b = a + b;
	/*���ð�λ����λ��ʽ����b��a��ֵ*/
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d\n%d",b,a);
	_getch();
	return 0;
}