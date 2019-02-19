#include <stdio.h>
#include <time.h>

float sizef, ev_sizef;
int n=0,nx=0;
char c;
FILE *fp2;
FILE *fp1;
//计算文件大小
int sizefile(FILE *fp)
{
	
  //定义文件类型指针
	
	sizef = 0;
	while (!feof(fp)) {  //测试文件流
		fgetc(fp);       //读取字符串
		sizef++;         //对字符个数进行累加
	}
	rewind(fp);          //使文件指针重新指向文件的开头
	return sizef;	 //返回文件的大小值
}
//分割文件
void divide321() {
	
	char name[255] = { 0 };
lp1:
	printf("\nPlease input divide file's postion:");
	//scanf("%s.txt", name);
	//sprintf(name,"%d.txt",nx);  //转换
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
		//调用计算文件大小函数来输出显示文件的总大小和平均分割的每一份文件的大小

		scanf_s("%d", &nx);

		if (nx < 1) {
			printf("\nSorry,please input the right number:");
			goto lp2;
		}
		else {
			
			sizef = sizefile(fp2);
			//printf("%d");
			ev_sizef = sizef / nx;  //被分割后每一个子文件的大小
			printf("\nThe size:%.0f bite,when dividing every file about: %.0f bite", sizef, ev_sizef);
			dividefile(nx);

		}
	}

	return 0;
}
//分割文件流
dividefile(int n) {
	char name[255] = {0}, c = 0;
	int i,d=1;
	lp:     //是否继续分割文件
	for (i = 0; i < n; i++) {   //输入多少分割数，循环多少次
	lp1:
		printf("\nPlease input you want to dividing %d new file's postion:", i + 1);  //输入多少分割数，就手动输入多少文件名
		scanf("%s", name);    //输入路径和子文件名
		//sprintf(name,"%d.txt",nx);  //转换
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
			if (i != n)         //如果输入的分割数不等于输入的分割数，就一直判断
			{
				//printf("321");
				while (d <= ev_sizef) {     //d每次循环+1，一直到d大于子文件的文件大小为止
					fputc(fgetc(fp2),fp1);  //把fp2文件里的数据写入fp1里去
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
	//菜单分割成功，是否继续分割
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

//合并函数
void unitefile123() {
	int i = 1;
	char name[255], c=0;
	char buffer[20];
p3:
	do {
		p2:
		printf("\nPlease input you want to uniting %d new file's postion:", i++); //手动输入合并旧文件的位置和名字
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
			while (fread(buffer, 1, 1, fp2)) {   //把读取fp2的数据用buffer存起来
				fwrite(buffer, 1, 1, fp1);		//把读到的数据buffer写入到新文件中
			}

		}
		fclose(fp2);
		printf("\nWhether or not continue to unite(Y/N):");  //是否进行合并
		getchar();
		c = getchar();

	} while (c=='y'||c=='Y');
	fclose(fp1);

	printf("\nNnitefile successful,whether or the not continue to unite the other files(Y/N):");  //合并成功，是否继续
	getchar();
	c = getchar();
	if (c=='y'||c=='Y') {
		goto p3;
	}
	else {
		menu();
	}
}
//合并文件
void unite123() {
	char name[255] = { 0 };
p1:
	printf("\nPlease input unite file's postion:");   //手动输入合并的新文件路径和名字
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
//菜单
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