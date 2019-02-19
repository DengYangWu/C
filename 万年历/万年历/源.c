#include <stdio.h>
#include <time.h>
#include <windows.h> //win头文件
#include <string.h>
#include <stdlib.h>
/*年，月，日，周*/
int year = 0, month = 0, day = 0, week;
char *WEEK[] = {""};  //星期差的变量
int d,i, dm, dy, m2;  //dm为月份差，dy为年份差，m2位2月差

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
		dy = 0;    //输入的年的1月1到2000年1月1的星期差
		m2 = 1;    //2月引起的星期差  
		goto la_100;
	}
la_100:     /*该月以前的月所引起的星期差*/
	switch (month) {
	case 1:dm = 0; month = 31; break;  /*month在此存放该天数*/
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
	dy = (year-2000)+d;  /*该年1月1日到2000年1月1日的"星期差"*/
	if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)) {     /*判断2月份的星期差*/
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
	//若为0，则将sunday复制给WEEK参数
	if (day > 0) {                   /*判断查看类型*/
		switch (week1) {
		case 0:strcpy(WEEK, "SUNDAY"); break;
		case 1:strcpy(WEEK, "MONDAY"); break;
		case 2:strcpy(WEEK, "TUESDAY"); break;
		case 3:strcpy(WEEK, "WEDNESDAY"); break;
		case 4:strcpy(WEEK, "THURSDAY"); break;
		case 5:strcpy(WEEK, "FRIDAY"); break;
		case 6:strcpy(WEEK, "SATURDAY"); break;
		
		}
		printf("\n this day is %s   \(%d\)\n\n OK!\n", WEEK, week1);   /*输出提示信息*/
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

		fflush(stdout); //强制刷新缓存，输出显示
		printf("\nERROR!YOU FORGOT TO ENTER THE DATE YOU WANT TO VIEW\n");
		Sleep(5000);
		printf("The windows closes after 10 seconds!!!");
		for (i = 1; i < 11; i++) {
			Sleep(1000); //10 秒退出
			printf(" %d ", i);

			fflush(stdout);//强制刷新缓存，输出显示
		}
		printf("exit!!!");
		exit(0);
	}
	else {

		date_(year, month, day);/*传递年月日参数给date_函数*/
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