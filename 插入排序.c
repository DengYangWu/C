#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int *a, int n)    
{   
    //i��ʾ�洢��������
    //j��ʾ�洢��������
    //tmp�䵱����
    int i, j, tmp;    
    for (i = 1; i < n; i++) {    
      
        if (a[i] < a[i-1]) {   
          
            tmp = a[i];    
             printf("\n%d\n",j);
            for (j = i - 1; j >= 0 && a[j] > tmp; j--) {  
                a[j+1] = a[j];    
            }  
            a[j+1] = tmp;    
        }          
    }    
}    
int main() {
    int a[] = { 11,7,9,22,10,18,4,43,5,1,32};
    int n = sizeof(a)/sizeof(int);
    int i;
    printf("����ģ�");
    for(i=0;i<n;i++){
		printf("%d ",a[i]);
    }
    
    InsertionSort(a, n);
    printf("����õ�����Ϊ��");
    
    for (i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}


