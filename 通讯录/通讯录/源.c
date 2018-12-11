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
	int all = 0;				//用来存储共有多少联系人
	InitLinkman(message, &all);//先将结构体数组中的成员flag全部初始化为0，表示空，都可以存信息

	menu();
	printf("请输入你要实现的功能：");
	scanf("%d",&input);

	do {
		switch (input) {
		case 0:
			break;
		case 1: 
			AddLinkman(message,&all);     //添加联系人
			break;
		default:
			printf("你输入的数字不在菜单栏的范围内！");
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
		printf("对不起，通讯录已满，不能再存储联系人\n");
		return;
	}
	for (i = 0; i < 1000;i++) {
		if ((p+i)->flag == 0) { //flag = 0 表示该联系人为空，可以存新信息
			printf("请输入联系人姓名>\n");
			scanf("%s",(p + i)->name);
			printf("请输入联系人的性别>\n");
			scanf("%s",(p + i)->sex);

		}
	}

}