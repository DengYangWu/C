#include <stdio.h>
/*循环打印100的个数，并找到9出现的次数*/
int main() {
	int i = 0,j=0;
	while (i<100) {
		i++;
		printf("%d\t",i);
		//100内的9共有2种出现的方式
		if (i%10==9) {  //个位取余，余数为9就是9
			j++;
		}
		if (i/10==9) {  //十位，结果为9,就是9
			j++;
		}
		
	}
	printf("\n100的9共出现：%d次", j);
	_getch();
	return;
}