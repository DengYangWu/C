#include <stdio.h>
#include <math.h>

/*��������*/
/*��дһ������double myround(double x),����һ��С���������������롣
*���磺myround(-3.51)��ֵ��-4.0��myround(4.49)��ֵ��4.0�����Ե���math.h�е�
*�⺯��ceil��floorʵ�����������*/
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
	printf("�������ֵ�������������Ľ��Ϊ��%lf\n", myround(num));
	_getch();
	return 0;
}
double myround(double x)
{
	//double add=0.5;
	//int min,max;
	int sa, si;//sa���ڱ���x����������,si���ڱ����0.5�����ʱֵ
	if (x == 0.0)
		return 0.0;
	else
		if (x > 0.0)
		{
			sa = (int)x;  //����x=2.5��תΪ����Ϊ2
			si = x + 0.5; //x=2.5+0.5 = 3
			if (sa == floor(si))//2==3 �������͵ó�sa����saΪ2����������3//���if������˵��x��С����0.5С��Ӧ����ȥ
				return sa;
			else
				return sa + 1;
		}
		else
		{
			sa = (int)x; //ͬ�� sa=2
			si = x - 0.5; //si=2.5-0.5=2
			if (sa == ceil(si)) //����
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
//		printf("������������꣡");
//	}
//	else {
//		printf("���������ƽ�꣡");
//	}
//}
//main() {
//	int year;
//	printf("������һ����ݣ�\n");
//	scanf_s("%d",&year);
//	is_leap_year(year);
//	_getch();
//	return;
//}


