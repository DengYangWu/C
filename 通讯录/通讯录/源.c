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

	do {
		switch (input) {
		case 0:
			break;
		case 1: 
			AddLinkman(message,&all);     //�����ϵ��
			break;
		default:
			printf("����������ֲ��ڲ˵����ķ�Χ�ڣ�");
		}
	} while (input);
	
	system("pause");
	return 0;
}

void InitLinkman(struct A *str, int *a) {
	int i = 0;
	struct A *p = str;
	*a = 0;
	for (i = 0; i < 1000;i++) {
		(p + i)->flag = 0;
	}
}
void AddLinkman(struct A *str, int *a) {
	int i = 0;
	struct A *p = str;
	if ((*a) >= 1000) {
		printf("�Բ���ͨѶ¼�����������ٴ洢��ϵ��\n");
		return;
	}
	for (i = 0; i < 1000;i++) {
		if ((p+i)->flag == 0) { //flag = 0 ��ʾ����ϵ��Ϊ�գ����Դ�����Ϣ
			printf("��������ϵ������>\n");
			scanf("%s",(p + i)->name);
			printf("��������ϵ�˵��Ա�>\n");
			scanf("%s",(p + i)->sex);

		}
	}

}