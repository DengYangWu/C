#include <stdio.h>
#include <stdlib.h>
char name;
char pass;
void kaihu();


char gUser[100][32];               //�û���
char gMima[100][32];               //����
char Ggua[100][32];				   //��ʧ�û���

float YuE[100];                 //������
int UserShu = 0;                 //�û���
int guashu = 0;                 //��ʧ�û���

int main() {
	printf("                               ����ϵͳ                             \n");
	int atm=1;
	while (atm) {
		printf("*********************11.11*************************\n");
			printf("*            1.����                               *\n");
		printf("***************************************************\n");
		printf("�������������");
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


void kaihu()   //����
{
	int i, n = UserShu, j = 0;
	float m;
	char User[32], mima1[32], mima2[32];
	printf("�����������û���: ");
	getchar();
	scanf_s("%s", &User,32);
	for (i = 0; i < n + 1; i++)
	{
		printf("%d",i);
		if (strcmp(User, gUser[i]) == 0)
		{
			printf("���û����Ѵ���\n");
			break;
		}
		else
		{
			strcpy(gUser[UserShu], User);
			while (j != 1)
			{
				printf("��������������: ");
				scanf_s("%s", &mima1,32);
				printf("���ٴ�������������: ");
				scanf_s("%s", &mima2,32);
				if (strcmp(mima1, mima2) == 0)
				{
					printf("�������óɹ�\n");
					printf("���������Ĵ��� ");
					scanf_s("%f", &m);
					strcpy(gMima[UserShu], mima1);
					YuE[UserShu] = m;
					j = 1;
				}
				else
					printf("�������벻��ͬ,���������롣\n ");
			}
			UserShu++;
			break;
		}
	}
}
