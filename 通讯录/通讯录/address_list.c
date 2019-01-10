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
//	//	printf("对不起，通讯录已满，不能再存储联系人\n");
//	//	return;
//	//}
//
//	for (i = 0; i < 1000; i++)
//	{
//
//		if ((p + i)->flag == 0)//flag =0表示该联系人为空，可以存新的信息
//		{
//			printf("请输入联系人姓名>\n");
//			scanf("%s", pa->name);
//			//printf("%s",  al[i].name);
//			printf("请输入联系人性别>\n");
//			scanf("%s", pa->sex);
//			printf("请输入联系人年龄>\n");
//			scanf("%d", &pa->age);
//			//printf("%d", str->age);
//			printf("请输入联系人电话号码>\n");
//			scanf("%s", pa->number);
//			printf("请输入联系人地址>\n");
//			scanf("%s", pa->address);
//
//			(p + i)->flag = 1;//表示结构体已经存储联系人
//			(*a)++;//总联系人加一
//			//strcpy((p+1)->name,'\n');
//
//			FILE* fg= fg_write_txt();  //写入联系人详细到文件里
//			fprintf(fg,"%s %s %d %s %s\n", pa->name, pa->sex,pa->age,pa->number,pa->address);
//			//fprintf(boya, sizeof(struct A),N,fg);
//			fclose(fg);
//			FILE* fg_ = fg_txt_look(); //查看联系人详情
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
//		printf("请输入要删除联系人的信息(至少为姓名,性别,年龄,电话,住址中的一项)\n");
//	}
//	else if (num == 0) {
//		printf("请输入要查找联系人的信息(至少为姓名,性别,年龄,电话,住址中的一项)\n");
//	}
//	else if (num == 2) {
//		printf("请输入要修改联系人的信息(至少为姓名,性别,年龄,电话,住址中的一项)\n");
//		printf("*******************\n");
//		printf("***0.exit 1.姓名***\n");
//		printf("***2.性别 3.年龄***\n");
//		printf("***4.电话 5.住址 ***\n");
//	}
//}
//
//void DeleLinkman(struct A *str,int *a) {
//	pa = boya;
//	pb = boyb;
//    //char al[1000];  //存储所有联系人的详细
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
//	//fgets(s, 25, fin);/*用fgets读第一行到数组s中*/
//	//n = strlen(s);
//	//fseek(fin, n + 4, SEEK_SET);/*将文件指针移到下一行*/
//	//fgets(s, 25, fin);/*读取第二行的字符串*/
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
//	//	printf("对不起,通讯录已空\n");
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
//			printf("请输入联系人姓名\n");
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
//					//fprintf(fin, "%s %s %d %s %s\n", pa->name, pa->sex, pa->age, pa->number, pa->address);  //如果输入的联系人姓名不是，则把不相等的信息写入临时文件里
//					//fclose(ftp);
//					//fclose(fin);
//					//remove("E:\\address.txt");  //删除原来的整个文件
//					//rename("E:\\fast.txt", "E:\\address.txt");   //需改临时文件的命称
//				}
//
//			}
//
//			//
//			//for (i = 0; i < 1000; i++) {
//			//	if (strcmp((p + i)->name, n) == 0) {   //表示找到要删除的联系人
//			//		*(p + i) = *(p + *a - 1);  //将删除的联系人用最后一个联系人的信息重新刷新
//			//		(p + *a - 1)->flag = 0;  //删除结构体中的成员标识符flag赋值为0
//			//		(*a)--;  //联系人列表总数减1
//			//		break;  //结束本次循环
//			//	}
//
//			//}
//			if (l) {
//				printf("已删除！");
//				main();
//				
//			}
//			else {
//				printf("该联系人不存在！");
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