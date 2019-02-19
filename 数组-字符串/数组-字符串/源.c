#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	char yox[3][10] = { "scissor","stone","cloth" };
	int man, computer, result, ret;
	while (1) {
		computer = rand() % 3;   //电脑的随机数
		printf("Please enter three number：0=scissor,1=stone,2=cloth：\n");
		ret = scanf_s("%d",&man);
		if (ret != 1 || man < 0 || man > 2) {
			printf("You make a typo!\n");
			return 1;
		}
		else {
			printf("Your gesture is：%s\tComptuer gesture is：%s\n",yox[man],yox[computer]);
			printf("%d\n",man);
			result = (man - computer+4) % 3 - 1;   //下标为：0,1,2,结果：1为赢，0为平，-1为输
			if (result>0) {   //判断谁胜利了
				printf("You win!\n");
			}
			else if (result==0) {
				printf("Draw!\n");
			}
			else {
				printf("You lose!\n");
			}
		}
	}
	//srand(time(NULL));
	_getch();
	return 0;
}