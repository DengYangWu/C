#include<stdio.h>

//int countbit(unsigned int x)
//{
//	int count;
//	for (count = 0; x > 0; count++)
//		x &= x - 1;	//��������1��0
//	
//	return count;
//}
//int main(void)
//{
//	unsigned int a;
//	printf("Pleaseinput an integer: ");
//	scanf_s("%i", &a);
//	printf("%d\n", countbit(a));
//	_getch();
//	return 0;
//}

/*λ����� ��ӡ�˷�*/
unsigned int multiply(unsigned int x, unsigned int y)
{
	int ans = 0;
	while (x > 0)
	{
		if (x & 1)
		{
			ans += y;
		}
		y <<= 1;
		x >>= 1;
	}
	return ans;
}

int main(void)
{
	unsigned int x = 123;
	unsigned int y = 456;
	printf("%d\n", multiply(x, y));
	_getch();
	return 0;
}