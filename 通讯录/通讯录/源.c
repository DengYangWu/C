#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "address_list.h"


static void menu() {
	printf("\t\t\t***************************\n");
	printf("\t\t\t******* 0.exit    1.Add  **\n");
	printf("\t\t\t******* 2.Delect  3.Find **\n");
	printf("\t\t\t******* 4.Alter   5.Show **\n");
	printf("\t\t\t******* 6.Empty   7.Sort **\n");
	printf("\t\t\t***************************\n");

}

int main(){

	int input = 0;
	struct A message[1000];
	int all = 0;				//�����洢���ж�����ϵ��
	InitLinkman(message, &all);//�Ƚ��ṹ�������еĳ�Աflagȫ����ʼ��Ϊ0����ʾ�գ������Դ���Ϣ

	menu();
	printf("��������Ҫʵ�ֵĹ��ܣ�");
	scanf("%d",&input);

	//do {
		switch (input) {
		case 0:
			break;
		case 1: 
			AddLinkman(message,&all);     //�����ϵ��
			break;
		case 2:
			DeleLinkman(message, &all);
			break;
		default:
			printf("ѡ�����\n");
			main();
			
		}
	//} while (1);
	
	system("pause");
	return 0;
}

