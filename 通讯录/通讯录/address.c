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
			break;
		}
	}
}

static void menu(int num)//����Ĳ�����Ϊ�����ֲ�ͬ������menu
{
	if (num == 1)
		printf("������Ҫɾ����ϵ�˵���Ϣ(����Ϊ�������Ա����䡢�绰��סַ�е�һ��)\n");
	else if (num == 0)
		printf("������Ҫ������ϵ�˵���Ϣ(����Ϊ�������Ա����䡢�绰��סַ�е�һ��)\n");
	else if (num == 2)
		printf("������Ҫ�޸���ϵ�˵���Ϣ(����Ϊ�������Ա����䡢�绰��סַ�е�һ��)\n");
	printf("*******************\n");
	printf("***0.exit 1.����***\n");
	printf("***2.�Ա� 3.����***\n");
	printf("***4.�绰 5.סַ ***\n");
}

void DeleLinkman(struct A *str, int *a)
{
	int input = 0;
	int i = 0;
	struct A *p = str;

	if (*a == 0)
	{
		printf("�Բ���ͨѶ¼�ѿ�\n");
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
			printf("��������ϵ������\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->name, n) == 0)//˵���ҵ�Ҫɾ������ϵ��
				{

					*(p + i) = *(p + *a - 1);//��ɾ������ϵ�������һ����ϵ�˵���Ϣ���¸���
										//Ϊ�˱�֤�����������
					(p + *a - 1)->flag = 0;//ɾ�����ǽ��ṹ���еĳ�Ա��ʶ��flag��Ϊ0��
										  //��Ϊ����Ľ��������Խṹ����������һ��Ԫ�ر�ɾ��
					(*a)--;//��������һ
					break;//����˵��ɾ���ɹ����˳�forѭ��

				}

			}
			if (i == 1000)
				printf("�Բ��𣬸���ϵ�˲����ڣ�\n");
			else
				printf("��ɾ����\n");
		}

		break;
		case 2:
		{
			char n[5];
			printf("��������ϵ���Ա�\n");
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
				printf("�Բ��𣬸���ϵ�˲����ڣ�\n");
			else
				printf("��ɾ����\n");
		}

		break;
		case 3:
		{
			int n = 0;
			printf("��������ϵ������\n");
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
				printf("�Բ��𣬸���ϵ�˲����ڣ�\n");
			else
				printf("��ɾ����\n");

		}
		break;
		case 4:
		{
			char n[12];
			printf("��������ϵ�˵绰\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->number, n))//˵���ҵ�Ҫɾ������ϵ��
				{
					*(p + i) = *(p + *a - 1);
					(p + *a - 1)->flag = 0;
					(*a)--;
					break;

				}
			}
			if (i == 1000)
				printf("�Բ��𣬸���ϵ�˲����ڣ�\n");
			else
				printf("��ɾ����\n");
		}

		break;
		case 5:
		{
			char n[50];
			printf("��������ϵ��סַ\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->address, n) == 0)//˵���ҵ�Ҫɾ������ϵ��
				{
					*(p + i) = *(p + *a - 1);
					(p + *a - 1)->flag = 0;
					(*a)--;
					break;

				}

			}
			if (i == 1000)
				printf("�Բ��𣬸���ϵ�˲����ڣ�\n");
			else
				printf("��ɾ����\n");
		}

		break;

		default:
			printf("�����������������\n");
			break;
		}

	} while (input);


}

static void  print_Linkman(struct A *p, int i)
{
	printf("������%s\n�Ա�%s\n���䣺%d\n�绰��%s\nסַ��%s\n",
		(p + i)->name, (p + i)->sex, (p + i)->age, (p + i)->number, (p + i)->address);
}

void FindLinkman(struct A *str, int a)
{
	int input = 0;
	int i = 0;
	struct A *p = str;

	if (a == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
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
			printf("��������ϵ������\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->name, n) == 0)//˵���ҵ���ϵ��
				{
					print_Linkman(p, i);
					break;
				}

			}
			if (i == 1000)
				printf("�Բ��𣬸���ϵ�˲����ڣ�\n");
		}

		break;
		case 2:
		{
			char n[5];
			printf("��������ϵ���Ա�\n");
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
				printf("�Բ��𣬸���ϵ�˲����ڣ�\n");

		}

		break;
		case 3:
		{
			int n = 0;
			printf("��������ϵ������\n");
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
				printf("�Բ��𣬸���ϵ�˲����ڣ�\n");

		}
		break;
		case 4:
		{
			char n[12];
			printf("��������ϵ�˵绰\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->number, n) == 0)//˵���ҵ�Ҫɾ������ϵ��
				{
					print_Linkman(p, i);
					break;

				}
			}

			if (i == 1000)
				printf("�Բ��𣬸���ϵ�˲����ڣ�\n");

		}

		break;
		case 5:
		{
			char n[50];
			printf("��������ϵ��סַ\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->address, n) == 0)//˵���ҵ�Ҫɾ������ϵ��
				{
					print_Linkman(p, i);
					break;

				}

			}

			if (i == 1000)
				printf("�Բ��𣬸���ϵ�˲����ڣ�\n");

		}

		break;

		default:
			printf("�����������������\n");
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
			printf("��������Ҫ�޸���ϵ�˵�����\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->name, n) == 0)//˵���ҵ���ϵ��
				{
					printf("�������޸ĺ���ϵ�˵�����\n");
					scanf("%s", (p + i)->name);
					printf("�޸ĺ����ϢΪ>\n");
					print_Linkman(p, i);
					break;
				}

			}
			if (i == 1000)
				printf("�Բ��𣬸���ϵ�˲����ڣ�\n");
		}

		break;
		case 2:
		{
			char n[5];
			printf("��������ϵ���Ա�\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->sex, n) == 0)
				{
					printf("�������޸ĺ���ϵ�˵��Ա�\n");
					scanf("%s", (p + i)->sex);
					printf("�޸ĺ����ϢΪ>\n");
					print_Linkman(p, i);
					break;
				}

			}

			if (i == 1000)
				printf("�Բ��𣬸���ϵ�˲����ڣ�\n");

		}

		break;
		case 3:
		{
			int n = 0;
			printf("��������ϵ������\n");
			scanf("%d", &n);

			for (i = 0; i < 1000; i++)
			{
				if ((p + i)->age == n)
				{
					printf("�������޸ĺ���ϵ�˵�����\n");
					scanf("%d", (p + i)->age);
					printf("�޸ĺ����ϢΪ>\n");
					print_Linkman(p, i);
					break;

				}

			}

			if (i == 1000)
				printf("�Բ��𣬸���ϵ�˲����ڣ�\n");

		}
		break;
		case 4:
		{
			char n[12];
			printf("��������ϵ�˵绰\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->number, n) == 0)//˵���ҵ�Ҫɾ������ϵ��
				{
					printf("�������޸ĺ���ϵ�˵ĵ绰\n");
					scanf("%s", (p + i)->number);
					printf("�޸ĺ����ϢΪ>\n");
					print_Linkman(p, i);

					break;

				}
			}

			if (i == 1000)
				printf("�Բ��𣬸���ϵ�˲����ڣ�\n");

		}

		break;
		case 5:
		{
			char n[50];
			printf("��������ϵ��סַ\n");
			scanf("%s", n);

			for (i = 0; i < 1000; i++)
			{
				if (strcmp((p + i)->address, n) == 0)//˵���ҵ�Ҫɾ������ϵ��
				{

					printf("�������޸ĺ���ϵ�˵�סַ\n");
					scanf("%s", (p + i)->address);
					printf("�޸ĺ����ϢΪ>\n");
					print_Linkman(p, i);

					break;

				}

			}

			if (i == 1000)
				printf("�Բ��𣬸���ϵ�˲����ڣ�\n");

		}

		break;

		default:
			printf("�����������������\n");
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
		printf("�Բ���ͨѶ¼Ϊ��\n");
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
			if (strcmp((p + j)->name, (p + j + 1)->name) > 0)//�����Ǵ�С��������,�����ȥ�������ṹ�����
			{
				struct A obj;
				obj = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = obj;
			}
		}
	}
}
