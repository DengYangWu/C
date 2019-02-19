#include <stdio.h>
#define LEN 5
int a[LEN] = { 3, 5, 2, 4, 7 };
void insertion_sort(void)
{
	/*顺序形式，前面的数表示小，后面的数表示大*/
	int i, j, key;
	for (j = 1; j < LEN; j++) {
		printf("%d, %d, %d, %d, %d\n",
			a[0], a[1], a[2], a[3], a[4]);
		key = a[j];
		printf("key=%d, ", key);
		i = j -1;
	
		printf("i=%d, ",i);
			while (i >= 0 && a[i] > key) {   //表示后面的数比前面的数要小，成立了就把前面的数的下标+1，赋值给更新初始位置

				printf("a[i]=%d",a[i]);
				a[i + 1] = a[i];
				
				i--;            //表示后面的数满足上面的条件，下表-1，数组靠下标替换数据位置
			}
		a[i + 1] = key;         //表示while循环里的条件不成立，就保持位置不变，把大的数的位置+1，向后移
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