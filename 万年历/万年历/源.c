#include <stdio.h>
#include <time.h>
#include <windows.h> //winͷ�ļ�
#include <string.h>
#include <stdlib.h>
/*�꣬�£��գ���*/
int year = 0, month = 0, day = 0, week;
char *WEEK[] = {""};  //���ڲ�ı���
int d,i, dm, dy, m2;  //dmΪ�·ݲdyΪ��ݲm2λ2�²�

int date_(int year,int month,int day) {
	if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)) {
		printf("This is leap year\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\nOK!");

	}
	else {
		printf("This is common year\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\nOK!");
	}
	
	if (year==2000) {
		dy = 0;    //��������1��1��2000��1��1�����ڲ�
		m2 = 1;    //2����������ڲ�  
		goto la_100;
	}
la_100:     /*������ǰ��������������ڲ�*/
	switch (month) {
	case 1:dm = 0; month = 31; break;  /*month�ڴ˴�Ÿ�����*/
	case 2:dm = 3; month = d == 1 ? 29 : 28; break;
	case 3:dm = 3 + m2; month =31; break;
	case 4:dm = 6 + m2; month = 30; break;
	case 5:dm = 1 + m2; month =31; break;
	case 6:dm = 4 + m2; month = 30; break;
	case 7:dm = 6 + m2; month = 31; break;
	case 8:dm = 2 + m2; month = 31; break;
	case 9:dm = 5 + m2; month = 30; break;
	case 10:dm = m2 + m2; month = 31; break;
	case 11:dm = 3 + m2; month = 30; break;
	case 12:dm = 5 + m2; month = 31; break;
	}
	if (year>2000) {
		d = (year-1-2000)/4-(year-1-2000)/100+(year-1-2000)/400+1;
	}
	else {
		d=(year - 2000) / 4 - (year - 2000) / 100 + (year - 2000) / 400;
	}
	dy = (year-2000)+d;  /*����1��1�յ�2000��1��1�յ�"���ڲ�"*/
	if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)) {     /*�ж�2�·ݵ����ڲ�*/
		m2 = 1;
	}
	else {
		m2 = 0;
	}

	week = (dy + dm +5) % 7;
	if (week<0) {  
		week += 7;
	}
	int week1;
	week1 = (dy + dm+day-1 + 6) % 7;
	//��Ϊ0����sunday���Ƹ�WEEK����
	if (day > 0) {                   /*�жϲ鿴����*/
		switch (week1) {
		case 0:strcpy(WEEK, "SUNDAY"); break;
		case 1:strcpy(WEEK, "MONDAY"); break;
		case 2:strcpy(WEEK, "TUESDAY"); break;
		case 3:strcpy(WEEK, "WEDNESDAY"); break;
		case 4:strcpy(WEEK, "THURSDAY"); break;
		case 5:strcpy(WEEK, "FRIDAY"); break;
		case 6:strcpy(WEEK, "SATURDAY"); break;
		
		}
		printf("\n this day is %s   \(%d\)\n\n OK!\n", WEEK, week1);   /*�����ʾ��Ϣ*/
	}

	//eek = ++week % 7;
	printf("\nthe calender of this month as following\n");
	printf("\n*****************************************\n");
	printf("MON TUE WEN THU FRI STA SUN\n");
	//printf("week=%d\n",week);
	for (i = 0; i < week; i++) {
		printf("++++");
	}
		for (i = 1; i <= month; i++) {
			printf("%2d  ", i);
			week++;
			if (week % 7 == 0&&i!=month) {
				printf("\n");
			}
		}
	
	printf("\n*****************************************\n");
	printf("\nOK!\n");

}
int exit_(int year, int month, int day) {
	if (year == 0 || year < 1900 || month == 0 || day == 0) {

		fflush(stdout); //ǿ��ˢ�»��棬�����ʾ
		printf("\nERROR!YOU FORGOT TO ENTER THE DATE YOU WANT TO VIEW\n");
		Sleep(5000);
		printf("The windows closes after 10 seconds!!!");
		for (i = 1; i < 11; i++) {
			Sleep(1000); //10 ���˳�
			printf(" %d ", i);

			fflush(stdout);//ǿ��ˢ�»��棬�����ʾ
		}
		printf("exit!!!");
		exit(0);
	}
	else {

		date_(year, month, day);/*���������ղ�����date_����*/
	}
}

main(int x,char	**date) {

	while (1) {
		printf("Please enter the date you want to see:");
		scanf_s("%d %d %d", &year, &month, &day);
		exit_(year, month, day);
	}
		
	_getch();
	return 0;
}