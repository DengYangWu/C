

#ifndef _ADDRESS_LIST_H_
#define _ADDRESS_LIST_H_


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include  <assert.h>
#pragma warning(disable:4996)

typedef struct A{
	char name[20];
	char sex[5];
	int age;
	char number[12];//��Ϊ�绰һ��Ϊ11λ��int��32λ�����´治��
					//��Ϊscanf�����ַ�����Ĭ�ϼ�'\0',����Ϊ��ʹ��strcmp���������������

	char address[50];
	int flag;       //����ı�ʶ�� 0��ʾ��ϵ��Ϊ�գ�1��ʾ���ڸ���ϵ��
} stu;

void AddLinkman(struct A *str, int *a);
void InitLinkman(struct A *str,int *a);
#endif