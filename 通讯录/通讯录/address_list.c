//#include "address_list.h"
//
//
//FILE *const fg_write_txt();
//FILE *const fg_txt_look();
//
//void DeleLinkman(struct A *str, int *a);
//
//FILE *const fg_write_txt() {
//	FILE* fg = fopen("E:\\address.txt","a");
//
//}
//FILE *const fg_txt_look() {
//	FILE* fg = fopen("E:\\address.txt", "r");
//
//}
//void InitLinkman(struct A *str, int *a) {
//	int i = 0;
//	struct A *p = str;
//	*a = 0;
//	for (i = 0; i < 1000; i++) {
//		(p + i)->flag = 0;
//	}
//}
//void AddLinkman(struct A *str, int *a)
//{
//	pa = boya;
//	pb = boyb;
//	int i = 0;
//	struct A *p = str;
//	
//	//printf("%s\n", p->name);
//
//
//	//if ((*a) >= 1000)
//	//{
//	//	printf("�Բ���ͨѶ¼�����������ٴ洢��ϵ��\n");
//	//	return;
//	//}
//
//	for (i = 0; i < 1000; i++)
//	{
//
//		if ((p + i)->flag == 0)//flag =0��ʾ����ϵ��Ϊ�գ����Դ��µ���Ϣ
//		{
//			printf("��������ϵ������>\n");
//			scanf("%s", pa->name);
//			//printf("%s",  al[i].name);
//			printf("��������ϵ���Ա�>\n");
//			scanf("%s", pa->sex);
//			printf("��������ϵ������>\n");
//			scanf("%d", &pa->age);
//			//printf("%d", str->age);
//			printf("��������ϵ�˵绰����>\n");
//			scanf("%s", pa->number);
//			printf("��������ϵ�˵�ַ>\n");
//			scanf("%s", pa->address);
//
//			(p + i)->flag = 1;//��ʾ�ṹ���Ѿ��洢��ϵ��
//			(*a)++;//����ϵ�˼�һ
//			//strcpy((p+1)->name,'\n');
//
//			FILE* fg= fg_write_txt();  //д����ϵ����ϸ���ļ���
//			fprintf(fg,"%s %s %d %s %s\n", pa->name, pa->sex,pa->age,pa->number,pa->address);
//			//fprintf(boya, sizeof(struct A),N,fg);
//			fclose(fg);
//			FILE* fg_ = fg_txt_look(); //�鿴��ϵ������
//			//fscanf(fg_,"%s", &al[i]);
//		//	printf("%s",al[0].age);
//			//for (int i = 0; i < al;i++) {
//			//	printf("%s\n", &al[i].age);
//			//}
//			main();
//		}
//	}
//}
//
//
//
//static void	menu1(int num) {
//
//	if (num == 1) {
//		printf("������Ҫɾ����ϵ�˵���Ϣ(����Ϊ����,�Ա�,����,�绰,סַ�е�һ��)\n");
//	}
//	else if (num == 0) {
//		printf("������Ҫ������ϵ�˵���Ϣ(����Ϊ����,�Ա�,����,�绰,סַ�е�һ��)\n");
//	}
//	else if (num == 2) {
//		printf("������Ҫ�޸���ϵ�˵���Ϣ(����Ϊ����,�Ա�,����,�绰,סַ�е�һ��)\n");
//		printf("*******************\n");
//		printf("***0.exit 1.����***\n");
//		printf("***2.�Ա� 3.����***\n");
//		printf("***4.�绰 5.סַ ***\n");
//	}
//}
//
//void DeleLinkman(struct A *str,int *a) {
//	pa = boya;
//	pb = boyb;
//    //char al[1000];  //�洢������ϵ�˵���ϸ
//	int al = 0;
//
//	int l=0;
//
//	
//	FILE *fin;
//	char s[25];
//	fin = fopen("E:\\address.txt", "r"); fscanf(fin, "%*[^\n]%*c");
//	fscanf(fin,"%s\n", pb->name);
//
//	int i;
//	while (fseek(fin, 0L, SEEK_CUR)) {
//		++l;
//	}
//	printf("%d",l);
//	//for (i = 0; i < N; i++, pb++) {
//	//	printf("%s %s %d %s %s\n", pb->name, pb->sex, pb->age, pb->number,pb->address);
//	//}
//	//fgets(s, 25, fin);/*��fgets����һ�е�����s��*/
//	//n = strlen(s);
//	//fseek(fin, n + 4, SEEK_SET);/*���ļ�ָ���Ƶ���һ��*/
//	//fgets(s, 25, fin);/*��ȡ�ڶ��е��ַ���*/
//	//printf("%s", s);
//	//while (fseek(all,0L,SEEK_CUR)){
//	//	printf("%s", str->name);
//	//	l++;
//	//}
//
//
//	int input = 0;
//	char n = 0;
//
//	//if (*a == 0) {
//	//	printf("�Բ���,ͨѶ¼�ѿ�\n");
//	//}
//	//else
//	//{
//	//	menu1(1);
//	//}
//	do {
//
//		scanf("%d",&input);
//
//		switch (input) {
//		case 0:
//				break;
//		case 1:
//		{
//
//			printf("��������ϵ������\n");
//			scanf("%s", &n);
//			FILE *fin;
//			FILE *ftp;
//			fin = fopen("E:\\address.txt","r");
//			ftp = fopen("E:\\fast.txt","w");
//			
//			while (fgets(s,23,fin)) {
//				printf("%s",pa->name);
//				if (n==pa->name) {
//					printf("\n123");
//					//fprintf(fin, "%s %s %d %s %s\n", pa->name, pa->sex, pa->age, pa->number, pa->address);  //����������ϵ���������ǣ���Ѳ���ȵ���Ϣд����ʱ�ļ���
//					//fclose(ftp);
//					//fclose(fin);
//					//remove("E:\\address.txt");  //ɾ��ԭ���������ļ�
//					//rename("E:\\fast.txt", "E:\\address.txt");   //�����ʱ�ļ�������
//				}
//
//			}
//
//			//
//			//for (i = 0; i < 1000; i++) {
//			//	if (strcmp((p + i)->name, n) == 0) {   //��ʾ�ҵ�Ҫɾ������ϵ��
//			//		*(p + i) = *(p + *a - 1);  //��ɾ������ϵ�������һ����ϵ�˵���Ϣ����ˢ��
//			//		(p + *a - 1)->flag = 0;  //ɾ���ṹ���еĳ�Ա��ʶ��flag��ֵΪ0
//			//		(*a)--;  //��ϵ���б�������1
//			//		break;  //��������ѭ��
//			//	}
//
//			//}
//			if (l) {
//				printf("��ɾ����");
//				main();
//				
//			}
//			else {
//				printf("����ϵ�˲����ڣ�");
//			}
//		}
//		break;
//		case 2:
//		{
//			
//		}
//		}
//	} while (input);
// }