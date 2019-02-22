#include <stdio.h>
#include <stdlib.h>
char name;
char pass;
void kaihu();


char gUser[100][32];               //用户名
char gMima[100][32];               //密码
char Ggua[100][32];				   //挂失用户名

float YuE[100];                 //存款余额
int UserShu = 0;                 //用户数
int guashu = 0;                 //挂失用户数

int main() {
	printf("                               银行系统                             \n");
	int atm=1;
	while (atm) {
		printf("*********************11.11*************************\n");
			printf("*            1.开户                               *\n");
		printf("***************************************************\n");
		printf("请输入您的命令：");
		scanf_s("%d",&atm); system("cls");
		printf("\n");
		switch (atm) 
		{
		case 1:
			kaihu();
			
			break;
		}


	}
	
	system("pause");
	return 0;
}


void kaihu()   //开户
{
	int i, n = UserShu, j = 0;
	float m;
	char User[32], mima1[32], mima2[32];
	printf("请输入您的用户名: ");
	getchar();
	scanf_s("%s", &User,32);
	for (i = 0; i < n + 1; i++)
	{
		printf("%d",i);
		if (strcmp(User, gUser[i]) == 0)
		{
			printf("该用户名已存在\n");
			break;
		}
		else
		{
			strcpy(gUser[UserShu], User);
			while (j != 1)
			{
				printf("请输入您的密码: ");
				scanf_s("%s", &mima1,32);
				printf("请再次输入您的密码: ");
				scanf_s("%s", &mima2,32);
				if (strcmp(mima1, mima2) == 0)
				{
					printf("密码设置成功\n");
					printf("请输入您的存款金额： ");
					scanf_s("%f", &m);
					strcpy(gMima[UserShu], mima1);
					YuE[UserShu] = m;
					j = 1;
				}
				else
					printf("两次输入不相同,请重新输入。\n ");
			}
			UserShu++;
			break;
		}
	}
}
