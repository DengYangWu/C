#include <stdio.h>
#include <string.h>
int main(void)
{
	//int count[4] = { 3, 2, }, i;
	//for (i = 0; i < 4; i++)
	//	printf("count[%d]=%d\n", i, count[i]);
	int c[10] = {1,2,3,4};
	int t[10] = {4,3,2,1};
	int i;
	memcpy(t,c,sizeof(c));
	for (i = 0; i < 4;i++) {
		printf("%d ",t[i]);  //t数组里的元素被覆盖
	}
	_getch();
	return 0;
}