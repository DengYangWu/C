#include <stdio.h>
int main() {
	/*
	ʹ��ָ���������
	*/
	int ages[5] = { 10, 4, 9, 44, 99 };
	int *p;

	// ָ�����Pָ����������׵�ַ

	p = &ages[0];


	for (int i = 0; i < 5; i++)
	{

		printf("ages[%d] = %d\n", i, *(p + i));
	}
	_getch();
	return 0;
}