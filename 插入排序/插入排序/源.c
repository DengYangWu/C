#include <stdio.h>
#define LEN 5
int a[LEN] = { 3, 5, 2, 4, 7 };
void insertion_sort(void)
{
	/*˳����ʽ��ǰ�������ʾС�����������ʾ��*/
	int i, j, key;
	for (j = 1; j < LEN; j++) {
		printf("%d, %d, %d, %d, %d\n",
			a[0], a[1], a[2], a[3], a[4]);
		key = a[j];
		printf("key=%d, ", key);
		i = j -1;
	
		printf("i=%d, ",i);
			while (i >= 0 && a[i] > key) {   //��ʾ���������ǰ�����ҪС�������˾Ͱ�ǰ��������±�+1����ֵ�����³�ʼλ��

				printf("a[i]=%d",a[i]);
				a[i + 1] = a[i];
				
				i--;            //��ʾ�����������������������±�-1�����鿿�±��滻����λ��
			}
		a[i + 1] = key;         //��ʾwhileѭ������������������ͱ���λ�ò��䣬�Ѵ������λ��+1�������
	}
	printf("%d, %d, %d, %d, %d\n",
		a[0], a[1], a[2], a[3], a[4]);
}
int main(void)
{
	insertion_sort();
	_getch();
	return 0;
}