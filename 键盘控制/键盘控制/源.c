#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include <windows.h>


int main(void)
{



	system("mode con cols=30 lines=20");
	int t[2], position[2] = { 1,1 };
	char a[20][30], choose;
	for (t[0] = 1; t[0] < 19; t[0]++)
	{
		for (t[1] = 1; t[1] < 29; t[1]++)
		{
			a[t[0]][t[1]] = ' ';
		}
	}
	while (1)
	{

		HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO cci;
		GetConsoleCursorInfo(hOut, &cci);//获取光标信息
		cci.bVisible = FALSE;//隐藏光标
		SetConsoleCursorInfo(hOut, &cci);//设置光标信息
		a[position[0]][position[1]] = 'A';
		for (t[0] = 1; t[0] < 19; t[0]++)
		{
			for (t[1] = 1; t[1] < 29; t[1]++)
			{
				printf("%c", a[t[0]][t[1]]);
			}
			printf("\n");
		}
		if (GetAsyncKeyState(VK_UP))
		{
			a[position[0]--][position[1]] = ' ';
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			a[position[0]++][position[1]] = ' ';
		}
		else if (GetAsyncKeyState(VK_LEFT))
		{
			a[position[0]][position[1]--] = ' ';
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			a[position[0]][position[1]++] = ' ';
		}
		else;
		Sleep(100);
		system("cls");
	}



	
	return 0;
}
