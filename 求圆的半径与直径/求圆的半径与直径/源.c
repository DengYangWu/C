#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*求出圆的半径长度*/
double distance(double x1,double y1,double x2,double y2) {
	double dx = x2 - x1;
	double dy = y2 - y1;
	double dsquared = dx * dx + dy * dy;
	double result = sqrt(dsquared);
	//printf("dx is %f\ndy is %f\n",dx,dy);
	return result;
}
/*求出圆的面积*/
double area(double radius) {
	return 3.1416 * radius * radius;
}
double area_point(double x1, double y1, double x2, double y2) {
		double dx = x2 - x1;
		double dy = y2 - y1;
		double radius = sqrt(dx + dx * dy + dy);
		return 3.1415 * radius * radius;
}
int main() {
	printf("area is %f\n",area(distance(1.0, 2.0, 4.0, 6.0)));
	printf("distance is %f\n",distance(1.0, 2.0, 4.0, 6.0));
	system("pause");
	return 0;
}