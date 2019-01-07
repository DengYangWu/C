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

	//do {
		switch (input) {
		case 0:
			break;
		case 1: 
			AddLinkman(message,&all);     //添加联系人
			break;
		case 2:
			DeleLinkman(message, &all);
			break;
		default:
			printf("选择错误\n");
			main();
			
		}
	//} while (1);
	
	system("pause");
	return 0;
}

