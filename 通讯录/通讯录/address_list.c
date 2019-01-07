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
	//	printf("对不起，通讯录已满，不能再存储联系人\n");
	//	return;
	//}

	for (i = 0; i < 1000; i++)
	{

		if ((p + i)->flag == 0)//flag =0表示该联系人为空，可以存新的信息
		{
			printf("请输入联系人姓名>\n");
			scanf("%s", al[i].name);
			//printf("%s",  al[i].name);
			printf("请输入联系人性别>\n");
			scanf("%s", al[i].sex);
			printf("请输入联系人年龄>\n");
			scanf("%s", al[i].age);
			printf("请输入联系人电话号码>\n");
			scanf("%s", al[i].number);
			printf("请输入联系人地址>\n");
			scanf("%s", al[i].address);

			(p + i)->flag = 1;//表示结构体已经存储联系人
			(*a)++;//总联系人加一
			//strcpy((p+1)->name,'\n');

			FILE* fg= fg_write_txt();  //写入联系人详细到文件里
			fprintf(fg,"%s\t%s\t%d\t%s\t%s\n", al[i].name, al[i].sex, al[i].age, al[i].number, al[i].address);
			fclose(fg);
			FILE* fg_ = fg_txt_look(); //查看联系人详情
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
		printf("请输入要删除联系人的信息(至少为姓名,性别,年龄,电话,住址中的一项)\n");
	}
	else if (num == 0) {
		printf("请输入要查找联系人的信息(至少为姓名,性别,年龄,电话,住址中的一项)\n");
	}
	else if (num == 2) {
		printf("请输入要修改联系人的信息(至少为姓名,性别,年龄,电话,住址中的一项)\n");
		printf("*******************\n");
		printf("***0.exit 1.姓名***\n");
		printf("***2.性别 3.年龄***\n");
		printf("***4.电话 5.住址 ***\n");
	}
}

void DeleLinkman(struct A *str,int *a) {

    char al[1000];  //存储所有联系人的详细
	char n[20];   //输入要删除的联系人姓名
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
	//	printf("对不起,通讯录已空\n");
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

			printf("请输入联系人姓名\n");
			scanf("%s", n);
			FILE *fin;
			FILE *ftp;
			fin = fopen("E:\\address.txt","r");
			ftp = fopen("E:\\fast.txt","w");
			while (fgets(al, 1000, fin)) {
				if (al!=n) {
					fputs(al, ftp);  //如果输入的联系人姓名不是，则把不相等的信息写入临时文件里
				}
			fclose(fin);
			fclose(ftp);
			remove("E:\\address.txt");  //删除原来的整个文件
			rename("E:\\fast.txt","E:\\address.txt");   //需改临时文件的命称
			}

			//
			//for (i = 0; i < 1000; i++) {
			//	if (strcmp((p + i)->name, n) == 0) {   //表示找到要删除的联系人
			//		*(p + i) = *(p + *a - 1);  //将删除的联系人用最后一个联系人的信息重新刷新
			//		(p + *a - 1)->flag = 0;  //删除结构体中的成员标识符flag赋值为0
			//		(*a)--;  //联系人列表总数减1
			//		break;  //结束本次循环
			//	}

			//}
			if (l-1) {
				printf("已删除！");
				
			}
			else {
				printf("该联系人不存在！");
			}
		}
		break;
		case 2:
		{
			
		}
		}
	} while (input);
 }