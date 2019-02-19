#include <stdio.h>
int add_range(int x,int y) {
	int sum=0;
	int i;
	for (i = x; i <= y;i++) {
		sum = sum + i;
	}
	return sum;
}
int main() {
	int range[100];
	range[0] = add_range(1,10);
	range[1] = add_range(1, 100);
	printf("1~10=%d\t1~100=%d",range[0],range[1]);
	_getch();
	return 0;
}