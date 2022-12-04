#include <stdio.h>
#include <conio.h>
#define TRUE 1
#define ESC     0x1b //전처리기 문법
//전처리기는 파일을 포함시키는 include와
//치환을 하는 define으로 나뉜다.
//define은 연산은 이루어지지 않고 치환만 가능하다.

/*int main(void) {
	int num;
	for (num = 0; num < 3; num++) {
		printf("Hello world%d\n", num);
	}
	return 0;
}*/

/*int main(void) {
	int num=0;
	while(num<3) {
		printf("Hello world%d\n", num);
		num++;
	}
	return 0;
}*/

/*int main(void) {
	char ch;
	while ((ch = getch()) != ESC) {
		if (ch >= 'a' && ch <= 'z')
			ch = ch - 32;
		putch(ch);
		printf("\n");
	}
}*/

/*int main(void) {
	char ch;
	while (1) {
		ch = getch();
		if (ch == ESC)
			break;
		if (ch >= 'a' && ch <= 'z')
			ch = ch - 32;
		putch(ch);
		printf("\n");
	}
}*/

/*int main(void) {
	int i, j, sum = 0;
	while (TRUE) {
		printf("수입력(1~100)");
		scanf_s("%d",&i);
		if (i >= 1 && i <= 100)
			break;
		printf("잘못 입력, 다시");
	}
	for (j = 1; j <= i; j++)
		sum += j;
	printf("%d", sum);
}
*/

/*
int main(void) {
	int i, temp;
	printf("수 입력 ");
	scanf_s("%d", &i);
	while (TRUE) {
		temp = i % 10;
		i = i / 10;
		printf("%d", temp);
		if (i == 0)
			break;
	}
	printf("\n");
}*/

/*int main(void) {
	int su = 0, sum = 0;
	do {
		su++;
		sum += su;
	} while (su < 10);
	printf("sum=%d\n", sum);
}*/

/*int main(void) {
	int i, temp,reverse=0;
	printf("수 입력 ");
	scanf_s("%d", &i);
	printf("%d ->", i);
	while (TRUE) {
		temp = i % 10;
		reverse *= 10;
		reverse += temp;
		i = i / 10;
		if (i == 0)
			break;
	}
	printf("%d\n",reverse);
}
*/

/*int main(void) {
	int i, temp,sum=0;
	printf("수 입력 ");
	scanf_s("%d", &i);
	printf("%d의 자리수 합 : ", i);
	while (TRUE) {
		temp = i % 10;
		sum += temp;
		i = i / 10;
		if (i == 0)
			break;
	}
	printf("%d\n", sum);
}
*/

/*int main(void) {
	int su1=1, su2=1;
	for (; su1<= 2; su1++) {
		for (; su2 <= 5; su2++)
		{
			printf("su1=%d su2=%d\n", su1, su2);
			if (su2 == 2)
				break;
		}
		printf("%d * %d=%d\n", su1, su2, su1 * su2);
	}
}*/

/*int main(void)
{
	int su1 = 1, su2;
	while (su1 <= 2)
	{
		su2 = 1;
		while (su2 <= 5)
		{
			printf("su1 = %d su2 = %d\n", su1, su2);
			if (su2 == 2)
				break;
			su2++;
		}
		printf("%d * %d = %d\n", su1, su2, su1 * su2);
		su1++;
	}
}
*/

/*int main(void) {
	int su;
	for (su = 1; su < 5; su++) {
		if (su == 3) {
			continue;
			printf("su=3");
		}
		else
			printf("su=%d\n", su);
	}
}

*/

/*int main(void) {
	int i, j, sum = 0,flag;
	flag = 1;
	while (flag) {
		printf("수입력(1~100)");
		scanf_s("%d", &i);
		if (i >= 1 && i <= 100)
			flag=0;
		else
			printf("잘못 입력, 다시");
	}
	for (j = 1; j <= i; j++)
		sum += j;
	printf("%d", sum);
}
*/

/*int main(void) {
	int day = 0, rice = 100 * 1000, mouse = 2;
	while (rice > 0) {
		day += 1;
		rice -= (mouse * 20);
		if (day % 10 == 0)
			mouse *= 2;
	}
	printf("쥐 %d마리 다 먹은 날 %d일\n", mouse, day);
}
*/

/*void func(void) {
	printf("function");
	printf("program");
	printf("ming");
}
int main(void) {
	printf("main start\n");
	func();
}*/

/*int func(int num1, int num2) {
	num1 *= num2;
	return num1;
}
int main(void) {
	int sum = 0;
	sum = func(10, 2);
	printf("sum : %d\n", sum);
	return 0;
}*/

/*void SumFunc(void) {
	int i, n, sum = 0;
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++)
		sum += i;
	printf("%d", sum);
}*/

/*void SumFunc(int a) {
	int i, sum = 0;
	for (i = 0; i <= a; i++)
		sum += i;
	printf("%d", sum);
}
int main(void) {
	int n;
	scanf_s("%d", &n);
	SumFunc(n);
}*/
int SumFunc(int n) {
	int i, sum = 0;
	for (i = 0; i <= n; i++)
		sum += i;
	return sum;
}
int main(void) {
	int n, ret;
	scanf_s("%d", &n);
	ret = SumFunc(n);
	printf("%d\n", ret);
}
