#include"stdio.h"
int main()
{
	int a[4][4], b[16]; //������������
	int i, j, k = 0, n, min;
	printf("please input the elements of the matrix\n");
	for (i = 0; i < 4; i++) //Ϊ���鸳���ֵ
		for (j = 0; j < 4; j++)
			scanf_s("%d", &a[i][j]);
	for (i = 0; i < 4; i++) //����ά���鱣�浽һά��������
		for (j = 0; j < 4; j++)
			b[k++] = a[i][j];
	for (k = 0; k < 15; k++) //ð������
		for (n = k + 1; n < 16; n++)
		{
			min = b[k];
			if (min > b[n])
			{
				min = b[n];
				b[n] = b[k];
				b[k] = min;
			}
		}
	printf("\nmin=%d,max=%d\n", b[0], b[15]);
	_getch();
	return 0;
}