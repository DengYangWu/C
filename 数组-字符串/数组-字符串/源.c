#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	char yox[3][10] = { "scissor","stone","cloth" };
	int man, computer, result, ret;
	while (1) {
		computer = rand() % 3;   //���Ե������
		printf("Please enter three number��0=scissor,1=stone,2=cloth��\n");
		ret = scanf_s("%d",&man);
		if (ret != 1 || man < 0 || man > 2) {
			printf("You make a typo!\n");
			return 1;
		}
		else {
			printf("Your gesture is��%s\tComptuer gesture is��%s\n",yox[man],yox[computer]);
			printf("%d\n",man);
			result = (man - computer+4) % 3 - 1;   //�±�Ϊ��0,1,2,�����1ΪӮ��0Ϊƽ��-1Ϊ��
			if (result>0) {   //�ж�˭ʤ����
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