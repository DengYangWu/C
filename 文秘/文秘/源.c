#include <stdio.h>
#include <time.h>

float sizef, ev_sizef;
int n=0,nx=0;
char c;
FILE *fp2;
FILE *fp1;
//�����ļ���С
int sizefile(FILE *fp)
{
	
  //�����ļ�����ָ��
	
	sizef = 0;
	while (!feof(fp)) {  //�����ļ���
		fgetc(fp);       //��ȡ�ַ���
		sizef++;         //���ַ����������ۼ�
	}
	rewind(fp);          //ʹ�ļ�ָ������ָ���ļ��Ŀ�ͷ
	return sizef;	 //�����ļ��Ĵ�Сֵ
}
//�ָ��ļ�
void divide321() {
	
	char name[255] = { 0 };
lp1:
	printf("\nPlease input divide file's postion:");
	//scanf("%s.txt", name);
	//sprintf(name,"%d.txt",nx);  //ת��
	if ((fp2 = fopen("E:\\C\\C\\dividefile.txt", "rb")) == NULL) {
		printf("\nThe postion is error,whether or not repeate input(Y/N):");
		getchar();
		c = getchar();
		if (c == 'Y' || c == 'y') {
			goto lp1;
		}
		else {
			fclose(fp2);
			menu();
		}
	}
	else {
	lp2:
		printf("\nHow many do you want to divide the file:");
		//���ü����ļ���С�����������ʾ�ļ����ܴ�С��ƽ���ָ��ÿһ���ļ��Ĵ�С

		scanf_s("%d", &nx);

		if (nx < 1) {
			printf("\nSorry,please input the right number:");
			goto lp2;
		}
		else {
			
			sizef = sizefile(fp2);
			//printf("%d");
			ev_sizef = sizef / nx;  //���ָ��ÿһ�����ļ��Ĵ�С
			printf("\nThe size:%.0f bite,when dividing every file about: %.0f bite", sizef, ev_sizef);
			dividefile(nx);

		}
	}

	return 0;
}
//�ָ��ļ���
dividefile(int n) {
	char name[255] = {0}, c = 0;
	int i,d=1;
	lp:     //�Ƿ�����ָ��ļ�
	for (i = 0; i < n; i++) {   //������ٷָ�����ѭ�����ٴ�
	lp1:
		printf("\nPlease input you want to dividing %d new file's postion:", i + 1);  //������ٷָ��������ֶ���������ļ���
		scanf("%s", name);    //����·�������ļ���
		//sprintf(name,"%d.txt",nx);  //ת��
		if ((fp1 = fopen(name, "wb")) == NULL) {
			printf("\nYou input the file postion is error,whether or not input the new name(Y/N):");
			//getchar();
			//c = getchar();
			if (getchar() == 'Y' || getchar() == 'y') {
				goto lp1;
			}
			else {
				fclose(fp2);
				menu();
			}


		}
		else {
			d = 1;
			if (i != n)         //�������ķָ�������������ķָ�������һֱ�ж�
			{
				//printf("321");
				while (d <= ev_sizef) {     //dÿ��ѭ��+1��һֱ��d�������ļ����ļ���СΪֹ
					fputc(fgetc(fp2),fp1);  //��fp2�ļ��������д��fp1��ȥ
					d++;
				}
				
			}
			//else {

			//	while (fread(c, 1, 1, fp2)) {
			//		fwrite(c, 1, 1, fp1);
			//	}
			//}
			fclose(fp1);
		}
		
		fclose(fp2);
	}
	//�˵��ָ�ɹ����Ƿ�����ָ�
	printf("\nDivide successful,whether or not continue to divide(Y/N)");
	getchar();
	c = getchar();
	if (c=='Y'||c=='y') {
		goto lp;
	}
	else {
		menu();
	}
	return 0;
}

//�ϲ�����
void unitefile123() {
	int i = 1;
	char name[255], c=0;
	char buffer[20];
p3:
	do {
		p2:
		printf("\nPlease input you want to uniting %d new file's postion:", i++); //�ֶ�����ϲ����ļ���λ�ú�����
		scanf("%s", name);
		if ((fp2 = fopen(name, "rb+"))==NULL) {
			printf("\nYou input the file postion is error,whether or not input the new name(Y/N):"); 
			if (getchar() == 'Y' || getchar() == 'y') {
				goto p2;
			}
			else {
				menu();
			}
		}
		else {
			while (fread(buffer, 1, 1, fp2)) {   //�Ѷ�ȡfp2��������buffer������
				fwrite(buffer, 1, 1, fp1);		//�Ѷ���������bufferд�뵽���ļ���
			}

		}
		fclose(fp2);
		printf("\nWhether or not continue to unite(Y/N):");  //�Ƿ���кϲ�
		getchar();
		c = getchar();

	} while (c=='y'||c=='Y');
	fclose(fp1);

	printf("\nNnitefile successful,whether or the not continue to unite the other files(Y/N):");  //�ϲ��ɹ����Ƿ����
	getchar();
	c = getchar();
	if (c=='y'||c=='Y') {
		goto p3;
	}
	else {
		menu();
	}
}
//�ϲ��ļ�
void unite123() {
	char name[255] = { 0 };
p1:
	printf("\nPlease input unite file's postion:");   //�ֶ�����ϲ������ļ�·��������
	scanf("%s", name);
	if ((fp1 = fopen(name, "wb")) == NULL) {
		printf("\nThe postion is error,whether or not repeate input(Y/N):");
		getchar();
		c = getchar();
		if (c == 'Y' || c == 'y') {
			goto p1;
		}
		else {
			menu();
		}
	}
	else {
		unitefile123();
	}
	return 0;
}
//�˵�
menu() {
	while (1) {
		printf("\nPlease chooes you needful file:\n");
		printf("1.divide file\n");
		printf("2.unite file\n");
		printf("3.exit\n");
		printf(":");
		scanf_s("%d", &n);
		if (n == 1) {
			divide321();

		}
		else if (n == 2) {
			unite123();
		}
		else if (n == 3) {
			printf("5 seconds exit!!!");
			Sleep(5000);
			exit(0);
		}
		else {
			printf("Please select the correct option!");
		}

	}
}

int main() {

	//int k, j, s;
	//for (k = 2; k < 6;k++,k++) {
	//	printf("k=%d\n",k);
	//	s = 1;
	//	for (j = k; j < 6;j++) {
	//		s += j;
	//	}
	//}
	//printf("%d\n",s);
	menu();
	_getch();
	return 0;
}