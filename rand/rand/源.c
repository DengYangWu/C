#include <stdio.h>
#include <stdlib.h>
#define N 20
/*生成1~10的随机数，并且记录随机100000次的次数*/
int a[N];
void gen_random(int upper_bound)
{
	int i;
	//unsigned int seed;
	//seed = time(NULL);
	//srand(seed);
	for (i = 0; i < N; i++)
		a[i] = rand() % upper_bound;
}
int howmany(int value)  //计数随机数的次数
{
	int i;
	char count=0;
	for (i = 0; i < N; i++)
		if (a[i]==value) {
			//printf("%d ", a[i]);
			++count;
		}
	return count;
	//printf("\n");
}
/*打印10~20的随机数*/
void doublerand(int x) {
	int i;
	
	for (i = 0; i < N;i++) {
		a[i] = rand()%x+10;
	}
	
}
int main(void)
{
	int i, j,max=0;
	int howmanyL[10] = {0};

	//printf("%d",howmanyL[a[i]]);
	gen_random(10);
	for (i = 0; i < N; i++) {
		howmanyL[a[i]]++;
	}
	//doublerand(10,20);
	//printf("value\tHow many\n");
	printf("水平打印：\n");
	for (i = 0; i < 10;i++) {
		printf("%d ",i);
		for (j = 0; j < howmanyL[i];j++) {
			printf("* ");
		}
		printf("\n");
	}
	printf("\n垂直打印：\n");
		for (i = 0; i < 10; i++) {
			max = (max > howmanyL[i]) ? max : howmanyL[i];
			printf("%d ",i);
		}
		printf("\n");
	for (i = 0; i < max;i++) {
		for (j = 0; j < 10;j++) {
			if (howmanyL[j]>0) {
				printf("* ");
				--howmanyL[j];
			}
			else {
				printf("  ");
			}

		}
		printf("\n");
	}
	printf("\n");
	_getch();
	return 0;
}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define N 20
//
//int a[N];
//
//void gen_random(int upper_bound)
//{
//	int i;
//	unsigned int seed;
//	seed = time(NULL);
//	srand(seed);
//	for (i = 0; i < N; i++)
//		a[i] = rand() % upper_bound;
//}
//
//int main(void)
//{
//	int i, j, max = 0, histogram[10] = { 0 };
//
//	gen_random(10);
//	for (i = 0; i < N; i++)
//		histogram[a[i]]++;
//	//水平方向打印
//	printf("水平方向：\n");
//	for (i = 0; i < 10; i++) {
//		printf("%d  ", i);
//		for (j = 0; j < histogram[i]; j++)
//			printf("* ");
//		printf("\n");
//	}
//
//	//垂直打印
//	printf("\n\n垂直方向：\n");
//	for (i = 0; i < 10; i++) {
//		max = (max > histogram[i]) ? max : histogram[i];
//		printf("%d ", i);
//	}
//	printf("\n\n");
//	for (i = 0; i < max; i++) {
//		for (j = 0; j < 10; j++) {
//			if (histogram[j] > 0) {
//				printf("* ");
//				--histogram[j];
//			}
//			else
//				printf("  ");
//		}
//		printf("\n");
//	}
//	printf("\n");
//	_getch();
//	return 0;
//}