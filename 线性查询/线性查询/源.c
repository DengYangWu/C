//#include <stdio.h>
//
//char a[] = "Hello world";
//int indexof(char letter) {
//	int i = 0;
//	while (a[i]!='\0') {
//
//		if (a[i]==letter) {
//
//			return i;
//
//		}
//		i++;
//	}
//	return -1;
//}
//int main() {
//	printf("%d %d\n", indexof('o'),indexof('z'));
//	_getch();
//	return 0;
//}

#include<stdio.h>
 #define LEN 7

 int a[LEN] = { 4, 2, 3, 7, 9, 1, 5 };

 int main()
{
	         int min = a[0],min2=a[0];
	         int i, p,j;
	         for (i = 0; i < LEN; i++)
		     {
			
					if (a[i] < min)
					{

						min2 = min;
						min = a[i];
						
						//printf("min=%d ", min);
					}
					else {

						if (a[i] < min2&&a[i] != min) {

							min2 = a[i];
							p = i-1;    //-1代表，因为min2=min了，循环重min开始，下班多了一位

						}
					}
		     }
			 printf("the minimum is %d ", min);
			 printf("the two minimum is %d in %d\n", min2, p);    //最小的数为x,最大的数的下标为x

		     _getch();
	         return;
	 }