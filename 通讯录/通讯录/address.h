#ifndef _ADDRESS_LIST_H_
#define _ADDRESS_LIST_H_


#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)





struct A
{
	char name[20];
	char sex[5];
	int age;
	char number[12];//��Ϊ�绰һ��Ϊ11λ��int��32λ�����´治��
					//��Ϊscanf�����ַ�����Ĭ�ϼ�'\0',����Ϊ��ʹ��strcmp���������������
	char address[50];
	int flag;//�����ʶ����0��ʾ����ϵ��Ϊ�գ�1��ʾ���ڸ���ϵ��
};





void InitLinkman(struct A *str, int *a);
void DeleLinkman(struct A *str, int *a);
void AddLinkman(struct A *str, int *a);
void FindLinkman(struct A *str, int a);
void AlterLinkman(struct A *str);
void ShowLinkman(struct A *str, int a);
void SortName(struct A *str, int a);
#endif
