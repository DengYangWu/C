#include<iostream>

#include "unistd.h"

#include <Windows.h>
#include <stdio.h>
#include <conio.h>  //����
#include<stdlib.h> //free()����
#include <graphics.h>//ͼ�γ�ʼ��ͷ�ļ�
#include <tchar.h>
#include<stdlib.h>

//Ԥ����ģ��
#define Move printf("\n\n\n\n\n\n")
#define ON 1
#define OFF 0
/*------------------�����ȼ�---------------------*/
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
#define ALL 100          //�ļ�����
//#pragma comment(lib,"eaxyx.lib")
//#pragma comment(lib,"eaxyx6.lib")
//#pragma comment(lib,"eaxyxw.lib")
//#pragma comment(lib,"eaxyxw6.lib")
const char red[] = { 'A','D','E','S','O','H' };  //�ȼ���ʾ
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
//��������
typedef struct Tel {
	char name[15];
	char telnum[15];
	char Email[20];
	char workpl[30];
}Message;
int sum[1], pg = 1,page;
void *buffer, *buff;
Message msg[ALL], msgtem[ALL];
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

//��������
int key() {
	int i, page = 0;
	char Key, Message;

	FILE *fp;
	while (!_kbhit()) {             //��ȡ����
		Key = getchar();					//�԰�������ѡ��
		switch (Key) {
		case A:page = ADD(); break;
		case D:DELETE1(); break;
		case S:SEARCH(); break;
		case O:SORT(); break;
		case E:EDIT(); break;
		case H:HELP(); break;
		case Pageup:PAGEUP(page, ON); break;  //��ϵ����Ϣ�Ϸ�ҳ
		case Pagedn:PAGEDOWN(page, ON); break; //��ϵ����Ϣ�·�ҳ
		case ESC:
			fp = fopen("E:\\C\\C\\TBS.dat", "wb");
			for (i = 0; i < sum[0]; i++) {
				fwrite(&msg[i], sizeof(Message), 1, fp);  //���ļ���д�����ݿ�
			}
			fclose(fp);		//�ر��ļ�
			free(buffer);   //�ͷ��ļ�
			free(buff);
			system("cls");  //����


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
			if (strcmp(msgtem[i].name, msgtem[i + 1].name) > 0) {   //�Ƚ�2���ַ����Ĵ�С
				//����ǰ��2�������еĳ�Ա
				//��ǰ�߽ṹ���еĳ�Ա���θ����Ľṹ�����͵���ʱ����Ķ�Ӧ��Ա
				strcpy(tem[0].name, msgtem[i].name);
				strcpy(tem[0].telnum, msgtem[i].telnum);
				strcpy(tem[0].Email, msgtem[i].Email);
				strcpy(tem[0].workpl, msgtem[i].workpl);
				//�����ߵĳ�Ա���ݸ���ǰ�ߵĳ�Ա����
				strcpy(msgtem[i].name, msgtem[i + 1].name);
				strcpy(msgtem[i].telnum, msgtem[i + 1].telnum);
				strcpy(msgtem[i].Email, msgtem[i + 1].Email);
				strcpy(msgtem[i].workpl, msgtem[i + 1].workpl);
				//�ٽ���ʱ�ĳ�Ա���ݸ������ߵĳ�Ա����
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

	Drawwin(100, 100, 439, 250, ON);       //�Զ��廭ͼ����
	Drawwin(120, 120, 399, 210, OFF);
	Drawwin(350, 150, 150, 150, ON);
	setcolor(DARKGRAY);					  //���û�ͼ��ɫ
	settextstyle(100, 0, _T("����"));  //�������ֵĴ�С����ȣ�����
	outtextxy(100, 179, "TBS");          //����ı����ݺ�λ��
	setcolor(RED);
	settextstyle(100, 0, _T("����"));  
	outtextxy(70, 140, "TBS");
	setcolor(LIGHTBLUE);
	settextstyle(16,0,_T("����"));
	outtextxy(145, 310, "Telephone Book System");
	setcolor(RED);
	settextstyle(16, 0, _T("����"));
	outtextxy(260, 245, "Version 1.0");
	setcolor(BLUE);
	settextstyle(16, 0, _T("����"));
	outtextxy(360, 175, "MingriSoft");
	outtextxy(387, 205, "2011-04-26");
	outtextxy(380, 220, "CaoFeifei");
	system("cls");
	getchar();
	closegraph();    //�ر�ͼ��
	return;

}
//����绰����Ŀ
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
	if((fp=fopen("E:\\C\\C\\TBS.dat","rb"))==NULL){     //��TBS�ļ����ޣ�����
		fp = fopen("E:\\C\\C\\TBS.dat","wb");
		fp = fopen("E:\\C\\C\\TBS.dat","rb");
	}
	for (i = 0; i < 147;i++) {
		setfillstyle(1,LIGHTGREEN);
		bar(351,280,351+i,290);
		delay(1000+tem*100);
		if (tem<sum[0]) {
			fread(&msg[tem],sizeof(msg),1,fp);   //��ʼ������
			tem++;
		}
	}
	fclose(fp);
	setfillstyle(1,LIGHTGRAY);
	bar(351,260,498,290);
	settextstyle(20,0,_T("����"));
	setcolor(RED);
	outtextxy(375,260,"Press any key");
	while (!_kbhit);
}
void Pwd() {
	const char *passwrd=0, *Right = "12345";
	char temp[9];
	int i = 0;
	Move;                 //����
	printf("------------------------Think you for usring this system!\n\n");
	printf("------------------------Input a password(Not show):");   //����ַ�������ȡ�����
	char ch[30];
	system("cls");
	
	int len;
	
	while ((ch[i] = _getch()) != EOF) {
			putchar('*');
			i++;
	}
	printf("%d",i);
	
	return;
}
int main() {
	interfaceg();
	Pwd();
	key();
	getchar();
	return 0;
}
