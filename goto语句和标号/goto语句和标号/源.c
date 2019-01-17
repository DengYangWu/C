#include<stdio.h>
#include<math.h>

//int structa(double x, double y)
//{
//	if (y == 0)
//		printf("%.1f\n", x);
//	else
//	{
//		if (x == 0)
//			printf("%.1fi\n", y);
//		else
//		{
//			if (y > 0)
//				printf("%.1f+%.1fi\n", x, y);
//			if (y < 0)
//				printf("%.1f%.1fi\n", x, y);
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	double x, y;
//	printf("请输入复数的实部和虚部：");
//	scanf_s("%lf %lf", &x, &y);
//	structa(x, y);
//	_getch();
//	return 0;
//}
//unsigned int _gcd(unsigned int a, unsigned int b);
//struct rational { int x;
//				  unsigned int y;
//};
//struct rational make_rational(int x,int y) {
//	struct rational z;
//	z.x=x;
//	z.y = y;
//	return z;
//};
//void print_rational(struct rational a) {
//	if(a.x==0){
//		printf("0\n");
//	}
//	else {
//		printf("%d/%d\n",a.x,a.y);
//	}
//}
//struct rational add_rational(struct rational a,struct rational b) {
//	int gcdnumber;
//	struct rational z;
//	gcdnumber = _gcd(a.x,a.y);
//	z.x = a.x*b.y + b.x*a.y;
//	z.y = b.y*a.x;
//	return z;
//}
//struct rational sub_rational(struct rational a, struct rational b) {
//	int gcdnumber;
//	struct rational z;
//	gcdnumber = _gcd(a.x, a.y);
//	z.x = a.x*b.y - b.x*a.y;
//	z.y = b.y*a.x;
//	return z;
//}
//struct rational mul_rational(struct rational a, struct rational b) {
//	int gcdnumber;
//	struct rational z;
//	gcdnumber = _gcd(a.x, a.y);
//	z.x = a.x*b.x;
//	z.y = b.y*b.x;
//	return z;
//}
//struct rational div_rational(struct rational a, struct rational b) {
//	int gcdnumber;
//	struct rational z;
//	gcdnumber = _gcd(a.x, a.y);
//	z.x = b.y*a.x;
//	return z;
//}
//int main(void)
//{
//	struct rational a = make_rational(1, 8); /* a=1/8 */
//	struct rational b = make_rational(-1, 8); /* b=-1/8 */
//	print_rational(add_rational(a, b));
//	print_rational(sub_rational(a, b));
//	print_rational(mul_rational(a, b));
//	print_rational(div_rational(a, b));
//	_getch();
//	return 0;
//}
//
//unsigned int _gcd(unsigned int a, unsigned int b)
//{
//	return 0;
//}
/*实现分子，分母，复数*/
//unsigned int gcd(unsigned int a, unsigned int b);
//
//
//struct Rational {
//	int ele;
//	unsigned int den;
//};
//
//
//struct Rational make_rational(int ele, unsigned int den)
//{
//	struct Rational z;
//	z.ele = ele;
//	z.den = den;
//	return z;
//}
//
//
//void print_rational(struct Rational a)
//{
//	if (0 == a.ele)
//	{
//		printf("0\n");
//	}
//	else {
//		printf("%d/%d\n", a.ele, a.den);
//	}
//}
//
//
//struct Rational add_rational(struct Rational a, struct Rational b)
//{
//	int gcdnumber;
//	struct Rational z;
//	gcdnumber = gcd(a.den, b.den);
//	z.ele = a.ele * b.den + b.ele * a.den;
//	z.den = b.den * a.den;
//	return z;
//
//}
//
//
//struct Rational sub_rational(struct Rational a, struct Rational b)
//{
//	int gcdnumber;
//	struct Rational z;
//	gcdnumber = gcd(a.den, b.den);
//	z.ele = a.ele * b.den - b.ele * a.den;
//	z.den = b.den * a.den;
//	return z;
//}
//
//
//struct Rational mul_rational(struct Rational a, struct Rational b)
//{
//	int gcdnumber;
//	struct Rational z;
//	gcdnumber = gcd(a.den, b.den);
//	z.ele = a.ele * b.ele;
//	z.den = a.den * b.den;
//	return z;
//}
//
//
//struct Rational div_rational(struct Rational a, struct Rational b)
//{
//	int gcdnumber;
//	struct Rational z;
//	gcdnumber = gcd(a.den, b.den);
//	z.ele = a.ele * b.den;
//
//	return z;
//
//}
//
//
//unsigned int gcd(unsigned int a, unsigned int b)
//{
//	int r;
//	while (b > 0)
//	{
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	return a;
//}
//
//
//int main(void)
//{
//	struct Rational a = make_rational(1, 8);
//	struct Rational b = make_rational(-1, 8);
//	print_rational(add_rational(a, b));
//	print_rational(sub_rational(a, b));
//	print_rational(mul_rational(a, b));
//	print_rational(div_rational(a, b));
//	_getch();
//	return 0;
//}
struct complex_struct {
	double x, y;
};

double real_part(struct complex_struct z)
{
	return z.x;
}

double img_part(struct complex_struct z)
{
	return z.y;
}

double magnitude(struct complex_struct z)
{
	return sqrt(z.x * z.x + z.y * z.y);
}

double angle(struct complex_struct z)
{
	return atan2(z.y, z.x);
}
enum coordinate_type { RECTANGULAR = 1, POLAR };
int main(void)
{

	printf("%d %d\n", RECTANGULAR, POLAR);
	_getch();
	return 0;
}