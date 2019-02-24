#include<iostream>
#include <string.h>
#include "unistd.h"
#include <windows.h>
#include <stdio.h>
#include <conio.h>  //按键
#include<stdlib.h> //free()函数
#include <graphics.h>//图形初始化头文件
#include <tchar.h>

enum Color
{
	black, blue, green, lakeBlue, Red, purple, yellow, white, gray,
	lightBlue, lightGreen, lightSimpleGreen, lightRed, lightPurple, lightYellow, brightWhite
};
void setColor(unsigned short backColor = 0, unsigned short textColor = 7) {
	char command[9] = "color 07";		//默认颜色	
	command[6] = '0' + backColor;		//将backColor变量改为字符型 
	command[7] = '0' + textColor;		//将textColor变量改为字符型 
	system(command);				//调用系统函数 
}
void gotoxy(int x, int y) {
	COORD pos = { x,y };
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);// 获取标准输出设备句柄
	SetConsoleCursorPosition(hOut, pos);//两个参数分别是指定哪个窗体，具体位置
}

//预处理模块
#define Move printf("\n\n\n\n\n\n")
#define ON 1
#define OFF 0
/*------------------定义热键---------------------*/
#define ESC 27
#define F2 60
#define A 97
#define S 115
#define O 111
#define H 104
#define	E 101
#define D 100
#define Pageup 73
#define Pagedn 81
#define ALL 100          //文件个数
#define Backspace 8
//#pragma comment(lib,"eaxyx.lib")
//#pragma comment(lib,"eaxyx6.lib")
//#pragma comment(lib,"eaxyxw.lib")
//#pragma comment(lib,"eaxyxw6.lib")
const char *red[] = { "A","D","E","S","O","H" };  //热键显示
const char *f[] = { "Add","Delete","Edit","Search","Sort","Help" };
const char *Hel[] = {
	"ESC:QUIT",
	"A:ADD",
	"D:DELETE1",
	"E:EDIT",
	"S:SEARCH",
	"O:SORT",
	"H:HELP",
	"PAGEDOWN:          ",
	"PAGEUP:          ",
	"Fuction sort:  ",
	"ESC:restore"
};
//建立数组
typedef struct Tel {
	char name[15];
	char telnum[15];
	char Email[20];
	char workpl[30];
}Message;
int sum[1], pg = 1,page;
void *buffer, *buff;
Message msg[ALL], msgtem[ALL];

void Draw() {
	int i,l;
	setColor(white, purple);
	system("cls");
	for (i = 0; i < 6; i++) {
		//x = wherex();
		_cprintf("\t%s", f[i]);    //打印输出菜单数组
		l = strlen(f[i]);       //计算字符数组长度
		//gotoxy(x, y);
		if (i==4) {
		//	//gotoxy(x+1,y);
			_cprintf("%s",red[i]);
		}
		else {
		//	_cprintf("%s",red[i]);
		//	//x = x + 1 + 8;
			//gotoxy(x,y);
		}
		
	}
	return;

}
int ADD() {
	printf("ADD");
	return 0;
}
int DELETE1() {
	printf("delete");
	return 0;
}
int SEARCH() {
	printf("select");
	return 0;
}
int SORT() {
	printf("sort");
	return 0;
}
int EDIT() {
	printf("edit");
	char name[20];
	Message t[1];
	FILE* fp = fopen("E:\\C\\C\\TBS.dat","wb");
	int i, find = 0,num = 0;
	//gotoxy(1,23);

	return 0;
}
int HELP() {
	printf("help");
	return 0;
}
int PAGEUP(int page, int ON1) {
	printf("pageup");
	return 0;
}
int PAGEDOWN(int page, int ON1) {
	printf("pagedown");
	return 0;
}

//按键技术
int key() {
	int i, page = 0;
	char Key, Message;

	FILE *fp;
	while (!_kbhit()) {             //获取按键
		Key = getchar();					//对按键进行选择
		switch (Key) {
		case A:page = ADD(); break;
		case D:DELETE1(); break;
		case S:SEARCH(); break;
		case O:SORT(); break;
		case E:EDIT(); break;
		case H:HELP(); break;
		case Pageup:PAGEUP(page, ON); break;  //联系人信息上翻页
		case Pagedn:PAGEDOWN(page, ON); break; //联系人信息下翻页
		case ESC:
			fp = fopen("E:\\C\\C\\TBS.dat", "wb");
			for (i = 0; i < sum[0]; i++) {
				fwrite(&msg[i], sizeof(Message), 1, fp);  //向文件中写入数据块
			}
			fclose(fp);		//关闭文件
			free(buffer);   //释放文件
			free(buff);
			system("cls");  //清屏


			exit(0);
			break;
		}
	}
}
void Quick() {
	int i, j;
	char name[20];
	Message tem[1];
	for (j = 0; j < sum[0] - 1; j++) {
		for (i = 0; i < sum[0] - 1 - j; i++) {
			if (strcmp(msgtem[i].name, msgtem[i + 1].name) > 0) {   //比较2个字符串的大小
				//交换前后2个数组中的成员
				//将前者结构体中的成员依次赋给改结构体类型的临时数组的对应成员
				strcpy(tem[0].name, msgtem[i].name);
				strcpy(tem[0].telnum, msgtem[i].telnum);
				strcpy(tem[0].Email, msgtem[i].Email);
				strcpy(tem[0].workpl, msgtem[i].workpl);
				//将后者的成员数据赋给前者的成员数据
				strcpy(msgtem[i].name, msgtem[i + 1].name);
				strcpy(msgtem[i].telnum, msgtem[i + 1].telnum);
				strcpy(msgtem[i].Email, msgtem[i + 1].Email);
				strcpy(msgtem[i].workpl, msgtem[i + 1].workpl);
				//再将临时的成员数据赋给后者的成员数据
				strcpy(msgtem[i + 1].name, tem[0].name);
				strcpy(msgtem[i + 1].telnum, tem[0].telnum);
				strcpy(msgtem[i + 1].Email, tem[0].Email);
				strcpy(msgtem[i + 1].workpl, tem[0].workpl);
			}
		}
	}
}
int delay(int d) {
	return 0;
}
int Drawwin(int,int,int,int,int) {
	return 0;
}
int graphresult() {
	return 0;
}
int grapherrormsg(int gcode) {
	return 0;
}
void interfaceg() {
	//Draw();
	int driver= DETECT, gmode=0, gcode, grOk=0;
	int i;
	//system("cls");
	initgraph(640, 480,SHOWCONSOLE | NOCLOSE);
	gcode = graphresult();
	if (gcode != grOk) {
		printf("\nGraphics System Error:%s\n", grapherrormsg(gcode));
		_getch();
		exit(0);
	}

	Drawwin(100, 100, 439, 250, ON);       //自定义画图函数
	Drawwin(120, 120, 399, 210, OFF);
	Drawwin(350, 150, 150, 150, ON);
	setcolor(DARKGRAY);					  //设置绘图颜色
	settextstyle(100, 0, _T("楷体"));  //设置文字的大小，宽度，字体
	outtextxy(100, 179, "TBS");          //输出文本内容和位置
	setcolor(RED);
	settextstyle(100, 0, _T("楷体"));  
	outtextxy(70, 140, "TBS");
	setcolor(LIGHTBLUE);
	settextstyle(16,0,_T("楷体"));
	outtextxy(145, 310, "Telephone Book System");
	setcolor(RED);
	settextstyle(16, 0, _T("楷体"));
	outtextxy(260, 245, "Version 1.0");
	setcolor(BLUE);
	settextstyle(16, 0, _T("楷体"));
	outtextxy(360, 175, "MingriSoft");
	outtextxy(387, 205, "2011-04-26");
	outtextxy(380, 220, "CaoFeifei");
	system("cls");
	getchar();
	closegraph();    //关闭图形
	return;

}
//保存电话本项目
void Load() {
	int i, tem = 0;
	FILE *fp;
	setcolor(RED);
	outtextxy(365,265,"Load......");
	setfillstyle(1,GREEN);
	bar(351,280,498,290);
	if((fp=fopen("E:\\C\\C\\sum.dat","rb"))==NULL){
		fp = fopen("E:\\C\\C\\sum.dat","wb");
		sum[0] = 0;
		fwrite(&sum,sizeof(sum[0]),1,fp);
		fp = fopen("E:\\C\\C\\sum.dat","rb");
	}
	fread(&sum[0], sizeof(sum),1,fp);
	fclose(fp);
	if((fp=fopen("E:\\C\\C\\TBS.dat","rb"))==NULL){     //打开TBS文件，无，建立
		fp = fopen("E:\\C\\C\\TBS.dat","wb");
		fp = fopen("E:\\C\\C\\TBS.dat","rb");
	}
	for (i = 0; i < 147;i++) {
		setfillstyle(1,LIGHTGREEN);
		bar(351,280,351+i,290);
		delay(1000+tem*100);
		if (tem<sum[0]) {
			fread(&msg[tem],sizeof(msg),1,fp);   //初始化数据
			tem++;
		}
	}
	fclose(fp);
	setfillstyle(1,LIGHTGRAY);
	bar(351,260,498,290);
	settextstyle(20,0,_T("楷体"));
	setcolor(RED);
	outtextxy(375,260,"Press any key");
	while (!_kbhit);
}
void Pwd() {
	const char *passwrd=0, *Right = "12345";
	char temp[9];
	int i = 0;
	while (1) {
	Move;                 //换行
	printf("------------------------Think you for usring this system!\n\n");
	printf("------------------------Input a password(Not show):");   //输出字符串，获取口令号
	char ch;
	//system("cls");
	
	char len[100];

		while ((ch = _getch()) != EOF) {
			if (ch != '\b') {

				if (ch != '\r')
				{
					if (i <= 8) {
						len[i++] = ch;
						putchar('*');
					}

				}
				else {
					
					break;

				}
			}
			else {
				if (i > 0) {
					i--;
					printf("\b \b");
				}
			}

		}
		//printf("%d",i);
		//printf("%s",len);
		if (i>3) {
			len[i] = '\0';
			if (strcmp(len, Right) != 0) {
				printf("\n----------------------------Dont't worry!Input again.");
			}
			else {
				printf("\n----------------------------Succeed!");
				Draw();
				break;
			}
		}
		else {

				printf("\n----------------------------Sorry!You have enter three times password!\n");
				printf("\n----------------------------Press any key!");
				_getch();
				Sleep(1000);
				exit(0);
		}
	}

	return;
}
int main() {
	
	interfaceg();
	Pwd();
	key();
	getchar();
	return 0;
}
