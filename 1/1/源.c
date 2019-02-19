#include <stdio.h>
//int main(void)
//{
//	int sum = 0, i;
//	char input[5];
//	while (1) {
//		scanf_s("%s", input,5);
//		for (i = 0; input[i] != '\0'; i++)
//			sum = sum * 10 + input[i] - '0';
//		printf("input=%d\n", sum);
//	}
//	_getch();
//	return 0;
//}

int main(void)
{
	int i;
	char str[6] = "hello";
	char reverse_str[6] = "";
	printf("%s\n", str);
	for (i = 0; i < 5; i++)
		reverse_str[4 - i] = str[i];
	printf("%s\n", reverse_str);
	_getch();
	return 0;
}