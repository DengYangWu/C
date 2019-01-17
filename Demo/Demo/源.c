#include <stdio.h>
#include <math.h>

/*四舍五入*/
/*编写一个函数double myround(double x),输入一个小数，将它四舍五入。
*例如：myround(-3.51)的值是-4.0，myround(4.49)的值是4.0。可以调用math.h中的
*库函数ceil和floor实现这个函数。*/
#include <stdio.h>
#include <math.h>
double myround(double x);
int main()
{
	double num = 1.00;
	printf("please enter the value of num(double):");
	scanf_s("%lf", &num);
	//printf("%lf\n",num);
	//printf("%lf\n",floor(num));
	printf("你输入的值进行四舍五入后的结果为：%lf\n", myround(num));
	_getch();
	return 0;
}
double myround(double x)
{
	//double add=0.5;
	//int min,max;
	int sa, si;//sa用于保存x的整数部分,si用于保存加0.5后的临时值
	if (x == 0.0)
		return 0.0;
	else
		if (x > 0.0)
		{
			sa = (int)x;  //假如x=2.5，转为整形为2
			si = x + 0.5; //x=2.5+0.5 = 3
			if (sa == floor(si))//2==3 不成立就得出sa，而sa为2，成立就是3//如果if语句成立说明x的小数比0.5小，应当舍去
				return sa;
			else
				return sa + 1;
		}
		else
		{
			sa = (int)x; //同上 sa=2
			si = x - 0.5; //si=2.5-0.5=2
			if (sa == ceil(si)) //成立
				return sa; 
			else
				return sa - 1;
		}
}

//int increment(int x,char h)
//{
//	x = x + 1;
//	h = 'h'+h;
//}
//main(){
//
//	int i = 1, j = 2;
//	char h='i';
//	increment(i,h);
//	increment(j,h);
//	printf("%d,%d", increment(i, h), increment(j, h));
//	system("pause");
//	return 0;
//}
//int	is_leap_year(int year) {
//	if (year % 4 == 0&&year%100!=0||year%400==0) {
//		printf("你输入的是闰年！");
//	}
//	else {
//		printf("你输入的是平年！");
//	}
//}
//main() {
//	int year;
//	printf("请输入一个年份：\n");
//	scanf_s("%d",&year);
//	is_leap_year(year);
//	_getch();
//	return;
//}


