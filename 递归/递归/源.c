#include <stdio.h>
//int factorial(int n) {
//	if (n == 0) {
//		return 1;
//	}
//	else {
//		int recurse = factorial(n-1);
//		int result = n * recurse;
//		return result;
//	}
//}
/*判断公因数*/
//int commondivisor(int a,int b) {
//	if (b == 0) {
//		return a;
//	}
//	else {
//		commondivisor(b,a%b);
//	}
//}
//int main() {
//	int a=0,b=0;
//	int gcd;
//	//commondivisor(a,b);
//	printf("请输入2个正整数：");
//	while (scanf_s("%d\n%d",&a,&b)!=EOF) {
//		gcd=commondivisor(a,b);
//		printf("%d\n",gcd);
//	}
//	_getch();
//	return;
//}
/*三目运算符*/
int gcd(int a,int b) {
	return b ? gcd(b,a%b) : a;
}
//int main() {
//	int a = 0, b = 0;
//	printf("Please enter two positive integer：");
//	while (scanf_s("%d%d",&a,&b)) {
//		printf("Common Divisor：%d\n", a > b ? gcd(a, b) : gcd(b, a));
//	}
//	_getch();
//	return;
//}

int fib(int n) {
	return n ? (n-1)+(n-2) : 1;
}
int main() {
	int n = 0;
	printf("Please enter one positive integr：");
	while (scanf_s("%d",&n)) {
		printf("%d\n",fib(n));
	}
	_getch();
	return;
}