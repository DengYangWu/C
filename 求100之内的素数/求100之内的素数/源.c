#include <stdio.h>
/*求100以内的素数 使用break+continue*/
//int is_prime(int n)
//{
//	int i;
//	for (i = 2; i < n; i++)
//		if (n % i == 0)
//			break;
//	if (i == n)
//		return 1;
//	else
//		return 0;
//}
//int main(void)
//{
//	int i;
//	for (i = 1; i <= 100; i++) {
//		if (!is_prime(i))
//			continue;
//		printf("%d\n", i);
//	}
//	_getch();
//	return 0;
//}
/*求100以内的素数*/
int s(int n) {
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n%i == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int i,j;
	for (i = 1; i <= 100;i++) {
		if(s(i)){
			printf("%d\t", i);
		}

	}
	_getch();
	return 0;
}