#include <stdio.h>
#include <stdlib.h>

#define NONBLANK 'a'  /*������ж���ո�תΪһ���ո�*/
int main() {
	int c,b;
	b = NONBLANK;

	while ((c = getchar())!=EOF) {

		if (c != ' ') {
			putchar(c);      /*����������û�пո�ģ���ӡ�Ĳ���*/
		}
		if (c == ' ') {     /*���������пո�ֻ��ӡһ��*/
			b = c; 
			if (b != ' ') {  /*��鵱ǰ�Ŀո��ַ�������һ���������ַ�������һ���ո��еĵ�һ���ո�*/
				putchar(c);
			}
			
		}
	}
	
}