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
	char number[12];//因为电话一般为11位，int在32位机器下存不下
					//因为scanf输入字符串会默认加'\0',所以为了使用strcmp函数，数组多申请
	char address[50];
	int flag;//定义标识符，0表示该联系人为空，1表示存在该联系人
};





void InitLinkman(struct A *str, int *a);
void DeleLinkman(struct A *str, int *a);
void AddLinkman(struct A *str, int *a);
void FindLinkman(struct A *str, int a);
void AlterLinkman(struct A *str);
void ShowLinkman(struct A *str, int a);
void SortName(struct A *str, int a);
#endif
