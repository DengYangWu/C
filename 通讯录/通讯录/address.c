#include "address.h"

void InitLinkman(struct A *str, int *a)
{
	int i = 0;
	struct A *p = str;
	*a = 0;
	for (i = 0; i < 1000; i++)
	{
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
		printf("对不起，通讯录已满，不能再存储联系人\n");
		return;
	}

	for (i = 0; i < 1000; i++)
	{

		if ((p + i)->flag == 0)//flag =0表示该联系人为空，可以存新的信息
		{
			printf("请输入联系人姓名>\n");
			scanf("%s", (p + i)->name);
			//printf("%s", (p+i)->name);
			printf("请输入联系人性别>\n");
			scanf("%s", (p + i)->sex);
			printf("请输入联系人年龄>\n");
			scanf("%d", &((p + i)->age));
			printf("请输入联系人电话号码>\n");
			scanf("%s", (p + i)->number);
			printf("请输入联系人地址>\n");
			scanf("%s", (p + i)->address);
			(p + i)->flag = 1;//表示结构体已经存储联系人
			(*a)++;//总联系人加一
			break;
		}
	}
}

static void menu(int num)//这里的参数是为了区分不同函数的menu
{
	if (num == 1)
		printf("请输入要删除联系人的信息(至少为姓名、性别、年龄、电话、住址中的一项)\n");
	else if (num == 0)
		printf("请输入要查找联系人的信息(至少为姓名、性别、年龄、电话、住址中的一项)\n");
	else if (num == 2)
		printf("请输入要修改联系人的信息(至少为姓名、性别、年龄、电话、住址中的一项)\n");
	printf("*******************\n");
	printf("***0.exit 1.姓名***\n");
	printf("***2.性别 3.年龄***\n");
	printf("***4.电话 5.住址 ***\n");
}

void DeleLinkman(struct A *str, int *a)
{
	int input = 0;
	int i = 0;
	struct A *p = str;

	if (*a == 0)
	{
		printf("对不起，通讯录已空\n");
		return;
	}

	do
	{
		menu(1);
		scanf("%d", &input);

		switch (input)
		{
		case 0:
			break;
		case 1:
		{
			char n[20];
			// printf("%s\n", p->name);
			printf("请输入联系人姓名\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->name, n) == 0)//说明找到要删除的联系人
				{

					*(p + i) = *(p + *a - 1);//将删除的联系人用最后一个联系人的信息重新覆盖
										//为了保证数组的连续性
					(p + *a - 1)->flag = 0;//删除就是将结构体中的成员标识符flag赋为0，
										  //因为上面的交换，所以结构体数组的最后一个元素被删除
					(*a)--;//总人数减一
					break;//进来说明删除成功，退出for循环

				}

			}
			if (i == 1000)
				printf("对不起，该联系人不存在！\n");
			else
				printf("已删除！\n");
		}

		break;
		case 2:
		{
			char n[5];
			printf("请输入联系人性别\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->sex, n) == 0)
				{
					*(p + i) = *(p + *a - 1);
					(p + *a - 1)->flag = 0;
					(*a)--;
					break;
				}

			}
			if (i == 1000)
				printf("对不起，该联系人不存在！\n");
			else
				printf("已删除！\n");
		}

		break;
		case 3:
		{
			int n = 0;
			printf("请输入联系人年龄\n");
			scanf("%d", &n);

			for (i = 0; i < 1000; i++)
			{
				if ((p + i)->age == n)
				{
					*(p + i) = *(p + *a - 1);
					(p + *a - 1)->flag = 0;
					(*a)--;
					break;

				}

			}
			if (i == 1000)
				printf("对不起，该联系人不存在！\n");
			else
				printf("已删除！\n");

		}
		break;
		case 4:
		{
			char n[12];
			printf("请输入联系人电话\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->number, n))//说明找到要删除的联系人
				{
					*(p + i) = *(p + *a - 1);
					(p + *a - 1)->flag = 0;
					(*a)--;
					break;

				}
			}
			if (i == 1000)
				printf("对不起，该联系人不存在！\n");
			else
				printf("已删除！\n");
		}

		break;
		case 5:
		{
			char n[50];
			printf("请输入联系人住址\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->address, n) == 0)//说明找到要删除的联系人
				{
					*(p + i) = *(p + *a - 1);
					(p + *a - 1)->flag = 0;
					(*a)--;
					break;

				}

			}
			if (i == 1000)
				printf("对不起，该联系人不存在！\n");
			else
				printf("已删除！\n");
		}

		break;

		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);


}

static void  print_Linkman(struct A *p, int i)
{
	printf("姓名：%s\n性别：%s\n年龄：%d\n电话：%s\n住址：%s\n",
		(p + i)->name, (p + i)->sex, (p + i)->age, (p + i)->number, (p + i)->address);
}

void FindLinkman(struct A *str, int a)
{
	int input = 0;
	int i = 0;
	struct A *p = str;

	if (a == 0)
	{
		printf("通讯录为空\n");
		return;
	}

	do
	{
		menu(0);
		scanf("%d", &input);

		switch (input)
		{
		case 0:
			break;
		case 1:
		{
			char n[20];
			printf("请输入联系人姓名\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->name, n) == 0)//说明找到联系人
				{
					print_Linkman(p, i);
					break;
				}

			}
			if (i == 1000)
				printf("对不起，该联系人不存在！\n");
		}

		break;
		case 2:
		{
			char n[5];
			printf("请输入联系人性别\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->sex, n) == 0)
				{
					print_Linkman(p, i);

					break;
				}

			}

			if (i == 1000)
				printf("对不起，该联系人不存在！\n");

		}

		break;
		case 3:
		{
			int n = 0;
			printf("请输入联系人年龄\n");
			scanf("%d", &n);

			for (i = 0; i < 1000; i++)
			{
				if ((p + i)->age == n)
				{
					print_Linkman(p, i);
					break;

				}

			}

			if (i == 1000)
				printf("对不起，该联系人不存在！\n");

		}
		break;
		case 4:
		{
			char n[12];
			printf("请输入联系人电话\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->number, n) == 0)//说明找到要删除的联系人
				{
					print_Linkman(p, i);
					break;

				}
			}

			if (i == 1000)
				printf("对不起，该联系人不存在！\n");

		}

		break;
		case 5:
		{
			char n[50];
			printf("请输入联系人住址\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->address, n) == 0)//说明找到要删除的联系人
				{
					print_Linkman(p, i);
					break;

				}

			}

			if (i == 1000)
				printf("对不起，该联系人不存在！\n");

		}

		break;

		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);


}

void AlterLinkman(struct A *str)
{
	struct A *p = str;
	int i = 0;
	int input = 0;
	do
	{
		menu(2);
		scanf("%d", &input);

		switch (input)
		{
		case 0:
			break;
		case 1:
		{
			char n[20];
			printf("请输入需要修改联系人的姓名\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->name, n) == 0)//说明找到联系人
				{
					printf("请输入修改后联系人的姓名\n");
					scanf("%s", (p + i)->name);
					printf("修改后的信息为>\n");
					print_Linkman(p, i);
					break;
				}

			}
			if (i == 1000)
				printf("对不起，该联系人不存在！\n");
		}

		break;
		case 2:
		{
			char n[5];
			printf("请输入联系人性别\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->sex, n) == 0)
				{
					printf("请输入修改后联系人的性别\n");
					scanf("%s", (p + i)->sex);
					printf("修改后的信息为>\n");
					print_Linkman(p, i);
					break;
				}

			}

			if (i == 1000)
				printf("对不起，该联系人不存在！\n");

		}

		break;
		case 3:
		{
			int n = 0;
			printf("请输入联系人年龄\n");
			scanf("%d", &n);

			for (i = 0; i < 1000; i++)
			{
				if ((p + i)->age == n)
				{
					printf("请输入修改后联系人的年龄\n");
					scanf("%d", (p + i)->age);
					printf("修改后的信息为>\n");
					print_Linkman(p, i);
					break;

				}

			}

			if (i == 1000)
				printf("对不起，该联系人不存在！\n");

		}
		break;
		case 4:
		{
			char n[12];
			printf("请输入联系人电话\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->number, n) == 0)//说明找到要删除的联系人
				{
					printf("请输入修改后联系人的电话\n");
					scanf("%s", (p + i)->number);
					printf("修改后的信息为>\n");
					print_Linkman(p, i);

					break;

				}
			}

			if (i == 1000)
				printf("对不起，该联系人不存在！\n");

		}

		break;
		case 5:
		{
			char n[50];
			printf("请输入联系人住址\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->address, n) == 0)//说明找到要删除的联系人
				{

					printf("请输入修改后联系人的住址\n");
					scanf("%s", (p + i)->address);
					printf("修改后的信息为>\n");
					print_Linkman(p, i);

					break;

				}

			}

			if (i == 1000)
				printf("对不起，该联系人不存在！\n");

		}

		break;

		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);

}

void ShowLinkman(struct A *str, int a)
{
	int i = 0;
	struct A *p = str;

	if (a == 0)
	{
		printf("对不起，通讯录为空\n");
	}
	for (i = 0; i < a; i++)
	{
		print_Linkman(p, i);
	}
}

void SortName(struct A *str, int a)
{
	struct A *p = str;
	int i = 0;
	for (i = 0; i < a - 1; i++)
	{
		int j = 0;
		for (j = 0; j < a - i - 1; j++)
		{
			if (strcmp((p + j)->name, (p + j + 1)->name) > 0)//这里是从小到大排序,如果进去，交换结构体变量
			{
				struct A obj;
				obj = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = obj;
			}
		}
	}
}
