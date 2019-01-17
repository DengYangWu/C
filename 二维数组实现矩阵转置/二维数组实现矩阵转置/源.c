#include "stdio.h"
#include "string.h" //加上

int main()
{
	int n=0, a[100][100];
	memset(a, 0, 100 * 100 * sizeof(int)); //加上

		printf("Please enter the 3*3:");
		//n= _getch();
		scanf_s("%d", &n);
		printf("\n");

		int i, j, k = 1;
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				a[i - j + 1][j] = k;
				k++;
			}
		}
		for (i = 1; i <= n; i++)
		{
			printf("\n");
			for (j = 1; j <= n; j++)
			{
				printf("%3d", a[i][j]);
			}
		}

	system("pause");
	return;
}