#include"stdio.h"
int main()
{
	int a[4][4], b[16]; //定义两个数组
	int i, j, k = 0, n, min;
	printf("please input the elements of the matrix\n");
	for (i = 0; i < 4; i++) //为数组赋予初值
		for (j = 0; j < 4; j++)
			scanf_s("%d", &a[i][j]);
	for (i = 0; i < 4; i++) //将二维数组保存到一维数组里面
		for (j = 0; j < 4; j++)
			b[k++] = a[i][j];
	for (k = 0; k < 15; k++) //冒泡排序
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