#include <stdio.h>
#include <stdlib.h>

long dog(long a) {
	if (a>1) {
		return(a*dog(a - 1));
	}
	else {
		return 1;
	}
}
int main() {
	long number = 9;
	printf("number != %d\n ,",dog(number-1));
	system("pause");
	return 0;
}