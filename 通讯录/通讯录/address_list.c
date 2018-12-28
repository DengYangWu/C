#include "address_list.h"
void InitLinkman(struct A *str, int *a) {
	int i = 0;
	struct A *p = str;
	*a = 0;
	for (i = 0; i < 1000; i++) {
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
	for (i = 0; i < 1000; i++) {
		if ((p + i)->flag == 0) { //flag = 0 表示该联系人为空，可以存新信息
			printf("请输入联系人姓名>\n");
			scanf("%s", (p + i)->name);
			printf("请输入联系人的性别>\n");
			scanf("%s", (p + i)->sex);
			printf("请输入联系人年龄>\n");
			scanf("%d", &((p + i)->age));
			printf("请输入联系人电话号码>\n");
			scanf("%s", (p + i)->number);
			printf("请输入联系人地址>\n");
			scanf("%s", (p + i)->address);
			(p + i)->flag = 0;	//表示结构体已经存储了联系人  
			(*a)++;		//总联系人加一  变量a用来记录联系人的总数
			break;

		}
	}

}

static void	menu(int num) {
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
	int input = 0;
	int i = 0;
	struct A *p = str;
	
	if (*a == 0) {
		printf("对不起,通讯录已空\n");
		return;
	}
	do {
		menu(1);
		scanf("%d",&input);

		switch (input) {
		case 0:
				break;
		case 1:
		{
			char n[20];
			printf("请输入联系人姓名\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++) {
				if (strcmp((p + i)->name, n) == 0) {   //表示找到要删除的联系人
					*(p + i) = *(p + *a - 1);  //将删除的联系人用最后一个联系人的信息重新刷新
					(p + *a - 1)->flag = 0;  //删除结构体中的成员标识符flag赋值为0
					(*a)--;  //联系人列表总数减1
					break;  //结束本次循环
				}

			}
			if (i>1000) {
				printf("该联系人不存在！");
			}
			else {
				printf("已删除！");
			}
		}
		break:
		case 2:
		{
			
		}
		}
	} while (input);
 }