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
	stu al[1000];
	int i = 0;
	struct A *p = str;
	
	//printf("%s\n", p->name);


	//if ((*a) >= 1000)
	//{
	//	printf("�Բ���ͨѶ¼�����������ٴ洢��ϵ��\n");
	//	return;
	//}

	for (i = 0; i < 1000; i++)
	{

		if ((p + i)->flag == 0)//flag =0��ʾ����ϵ��Ϊ�գ����Դ��µ���Ϣ
		{
			printf("��������ϵ������>\n");
			scanf("%s", al[i].name);
			//printf("%s",  al[i].name);
			printf("��������ϵ���Ա�>\n");
			scanf("%s", al[i].sex);
			printf("��������ϵ������>\n");
			scanf("%s", al[i].age);
			printf("��������ϵ�˵绰����>\n");
			scanf("%s", al[i].number);
			printf("��������ϵ�˵�ַ>\n");
			scanf("%s", al[i].address);

			(p + i)->flag = 1;//��ʾ�ṹ���Ѿ��洢��ϵ��
			(*a)++;//����ϵ�˼�һ
			//strcpy((p+1)->name,'\n');

			FILE* fg= fg_write_txt();  //д����ϵ����ϸ���ļ���
			fprintf(fg,"%s\t%s\t%d\t%s\t%s\n", al[i].name, al[i].sex, al[i].age, al[i].number, al[i].address);
			fclose(fg);
			FILE* fg_ = fg_txt_look(); //�鿴��ϵ������
			//fscanf(fg_,"%s", &al[i]);
			printf("%s",al[0].age);
			//for (int i = 0; i < al;i++) {
			//	printf("%s\n", &al[i].age);
			//}
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

    char al[1000];  //�洢������ϵ�˵���ϸ
	char n[20];   //����Ҫɾ������ϵ������
	int l = 0;
	FILE *all = fg_txt_look();
	while (fscanf(all,"%s",al)) {
		
		l++;
	}
	printf("%s", al);
	int input = 0;
	int i = 0;
	struct A *p = str;

	//if (*a == 0) {
	//	printf("�Բ���,ͨѶ¼�ѿ�\n");
	//}
	//else
	//{
	//	menu1(1);
	//}
	do {

		scanf("%d",&input);

		switch (input) {
		case 0:
				break;
		case 1:
		{

			printf("��������ϵ������\n");
			scanf("%s", n);
			FILE *fin;
			FILE *ftp;
			fin = fopen("E:\\address.txt","r");
			ftp = fopen("E:\\fast.txt","w");
			while (fgets(al, 1000, fin)) {
				if (al!=n) {
					fputs(al, ftp);  //����������ϵ���������ǣ���Ѳ���ȵ���Ϣд����ʱ�ļ���
				}
			fclose(fin);
			fclose(ftp);
			remove("E:\\address.txt");  //ɾ��ԭ���������ļ�
			rename("E:\\fast.txt","E:\\address.txt");   //�����ʱ�ļ�������
			}

			//
			//for (i = 0; i < 1000; i++) {
			//	if (strcmp((p + i)->name, n) == 0) {   //��ʾ�ҵ�Ҫɾ������ϵ��
			//		*(p + i) = *(p + *a - 1);  //��ɾ������ϵ�������һ����ϵ�˵���Ϣ����ˢ��
			//		(p + *a - 1)->flag = 0;  //ɾ���ṹ���еĳ�Ա��ʶ��flag��ֵΪ0
			//		(*a)--;  //��ϵ���б�������1
			//		break;  //��������ѭ��
			//	}

			//}
			if (l-1) {
				printf("��ɾ����");
				
			}
			else {
				printf("����ϵ�˲����ڣ�");
			}
		}
		break;
		case 2:
		{
			
		}
		}
	} while (input);
 }