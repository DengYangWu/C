#include "address_list.h"


FILE *const fg_write_txt();
FILE *const fg_txt_look();
void DeleLinkman(struct A *str, int *a);

FILE *const fg_write_txt() {
	FILE* fg = fopen("E:\\address.txt","a");

}
FILE *const fg_txt_look() {
	FILE* fg = fopen("E:\\address.txt", "r");

}
void InitLinkman(struct A *str, int *a) {
	int i = 0;
	struct A *p = str;
	*a = 0;
	for (i = 0; i < 1000; i++) {
		(p + i)->flag = 0;
	}
}
void AddLinkman(struct A *str, int *a)
{

	int i = 0;
	struct A *p = str;
	//printf("%s\n", p->name);


	if ((*a) >= 1000)
	{
		printf("�Բ���ͨѶ¼�����������ٴ洢��ϵ��\n");
		return;
	}

	for (i = 0; i < 1000; i++)
	{

		if ((p + i)->flag == 0)//flag =0��ʾ����ϵ��Ϊ�գ����Դ��µ���Ϣ
		{
			printf("��������ϵ������>\n");
			scanf("%s", (p + i)->name);
			//printf("%s", (p+i)->name);
			printf("��������ϵ���Ա�>\n");
			scanf("%s", (p + i)->sex);
			printf("��������ϵ������>\n");
			scanf("%d", &((p + i)->age));
			printf("��������ϵ�˵绰����>\n");
			scanf("%s", (p + i)->number);
			printf("��������ϵ�˵�ַ>\n");
			scanf("%s", (p + i)->address);

			(p + i)->flag = 1;//��ʾ�ṹ���Ѿ��洢��ϵ��
			(*a)++;//����ϵ�˼�һ
			//strcpy((p+1)->name,'\n');

			FILE* fg= fg_write_txt();  //д����ϵ����ϸ���ļ���
			fprintf(fg,"%s\t%s\t%d\t%s\t%s\n",(p + i)->name,(p + i)->sex,(p + i)->age,(p + i)->number,(p + i)->address);
			fclose(fg);
			FILE* fg_ = fg_txt_look(); //�鿴��ϵ������
			//fscanf(fg_,"%s\n", &(p + i)->age);
			//printf("%s", &(p + i)->age);
			main();
		}
	}
}



static void	menu1(int num) {

	if (num == 1) {
		printf("������Ҫɾ����ϵ�˵���Ϣ(����Ϊ����,�Ա�,����,�绰,סַ�е�һ��)\n");
	}
	else if (num == 0) {
		printf("������Ҫ������ϵ�˵���Ϣ(����Ϊ����,�Ա�,����,�绰,סַ�е�һ��)\n");
	}
	else if (num == 2) {
		printf("������Ҫ�޸���ϵ�˵���Ϣ(����Ϊ����,�Ա�,����,�绰,סַ�е�һ��)\n");
		printf("*******************\n");
		printf("***0.exit 1.����***\n");
		printf("***2.�Ա� 3.����***\n");
		printf("***4.�绰 5.סַ ***\n");
	}
}

void DeleLinkman(struct A *str,int *a) {

	printf("%d\n",*a);
	int input = 0;
	int i = 0;
	struct A *p = str;

	if (*a == 0) {
		printf("�Բ���,ͨѶ¼�ѿ�\n");
	}
	else
	{
		menu1(1);
	}
	do {

		scanf("%d",&input);

		switch (input) {
		case 0:
				break;
		case 1:
		{
			char n[20];
			printf("��������ϵ������\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++) {
				if (strcmp((p + i)->name, n) == 0) {   //��ʾ�ҵ�Ҫɾ������ϵ��
					*(p + i) = *(p + *a - 1);  //��ɾ������ϵ�������һ����ϵ�˵���Ϣ����ˢ��
					(p + *a - 1)->flag = 0;  //ɾ���ṹ���еĳ�Ա��ʶ��flag��ֵΪ0
					(*a)--;  //��ϵ���б�������1
					break;  //��������ѭ��
				}

			}
			if (i<=0) {
				printf("����ϵ�˲����ڣ�");
			}
			else {
				printf("��ɾ����");
			}
		}
		break;
		case 2:
		{
			
		}
		}
	} while (input);
 }