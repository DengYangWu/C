#include <stdio.h>
#include <stdlib.h>

int main() {
	char s1[100];
	char s2[100];
	printf(expand(s1,s2));
	printf(expand(s1,s2));
	system("pause");
}

int expand(s1, s2) {
	int i;
	for (i = 65; i < 90;i++) {
		printf("%c-",i);
		s2 = i;
	}
	char j;
	for (j = 'a'; j <= 'z';j++) {
		printf("%c-",j);
		s2 = j; 
	}

}