#include <stdio.h>
#include <stdlib.h>

#define NONBLANK 'a'  /*将语句中多个空格，转为一个空格*/
int main() {
	int c,b;
	b = NONBLANK;

	while ((c = getchar())!=EOF) {

		if (c != ' ') {
			putchar(c);      /*如果输入的是没有空格的，打印的不变*/
		}
		if (c == ' ') {     /*如果输入的有空格，只打印一个*/
			b = c; 
			if (b != ' ') {  /*检查当前的空格字符究竟是一个单个的字符串还是一串空格中的第一个空格*/
				putchar(c);
			}
			
		}
	}
	
}