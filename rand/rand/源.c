#include <stdio.h>
#include <stdlib.h>
#define N 20
/*����1~10������������Ҽ�¼���100000�εĴ���*/
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
int howmany(int value)  //����������Ĵ���
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
/*��ӡ10~20�������*/
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
	printf("ˮƽ��ӡ��\n");
	for (i = 0; i < 10;i++) {
		printf("%d ",i);
		for (j = 0; j < howmanyL[i];j++) {
			printf("* ");
		}
		printf("\n");
	}
	printf("\n��ֱ��ӡ��\n");
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
//	//ˮƽ�����ӡ
//	printf("ˮƽ����\n");
//	for (i = 0; i < 10; i++) {
//		printf("%d  ", i);
//		for (j = 0; j < histogram[i]; j++)
//			printf("* ");
//		printf("\n");
//	}
//
//	//��ֱ��ӡ
//	printf("\n\n��ֱ����\n");
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