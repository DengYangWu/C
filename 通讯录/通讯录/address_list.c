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
		printf("�Բ���ͨѶ¼�����������ٴ洢��ϵ��\n");
		return;
	}
	for (i = 0; i < 1000; i++) {
		if ((p + i)->flag == 0) { //flag = 0 ��ʾ����ϵ��Ϊ�գ����Դ�����Ϣ
			printf("��������ϵ������>\n");
			scanf("%s", (p + i)->name);
			printf("��������ϵ�˵��Ա�>\n");
			scanf("%s", (p + i)->sex);
			printf("��������ϵ������>\n");
			scanf("%d", &((p + i)->age));
			printf("��������ϵ�˵绰����>\n");
			scanf("%s", (p + i)->number);
			printf("��������ϵ�˵�ַ>\n");
			scanf("%s", (p + i)->address);
			(p + i)->flag = 0;	//��ʾ�ṹ���Ѿ��洢����ϵ��  
			(*a)++;		//����ϵ�˼�һ  ����a������¼��ϵ�˵�����
			break;

		}
	}

}

static void	menu(int num) {
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
	int input = 0;
	int i = 0;
	struct A *p = str;
	
	if (*a == 0) {
		printf("�Բ���,ͨѶ¼�ѿ�\n");
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
			if (i>1000) {
				printf("����ϵ�˲����ڣ�");
			}
			else {
				printf("��ɾ����");
			}
		}
		break:
		case 2:
		{
			
		}
		}
	} while (input);
 }