#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main(void) {
	int su1 = 20, su2 = 3;
	printf("%d + %d = %d\n", su1, su2, su1 + su2);
	printf("%d - %d = %d\n", su1, su2, su1 - su2);
	printf("%d * %d = %d\n", su1, su2, su1 * su2);
	printf("%d / %d = %d\n", su1, su2, su1 / su2);
	printf("%d %% %d = %d\n", su1, su2, su1 % su2);
}
*/

/*
int main(void) {
	float su1 = 3.01, su2 = 3.0;
	printf("변수 su1과 su2의 크기 비교 결과:%d\n", su1 <= su2);
	printf("변수 su1과 su2의 크기 비교 결과:%d\n", su1 >= su2);
	printf("변수 su1과 su2의 크기 비교 결과:%d\n", su1 == su2);
	printf("변수 su1과 su2의 크기 비교 결과:%d\n", su1 != su2);
	
}
*/

/*
int main(void) {
	int su1, su2;
	su1 = su2 = 5;
	printf("su1+1=%d\n", su1 += 1);
	printf("su1-1=%d\n", su1 -= 1);
	printf("su1*su2=%d\n", su1 *= su2);
	printf("su1/su2=%d\n", su1 /= su2);
	printf("su1%%su2=%d\n", su1 %= su2);
}
*/

/*
int main(void) {
	int num;
	printf(" 점수를 입력하세요... ");
	scanf_s("%d", &num);
	if (!((num > 0) && (num <= 100)))
		printf("입력 범위를 벗어 났습니다.\n");
}
*/

/*
int main(void) {
	int su1;
	float su2;
	su1 = 5; ++su1; printf("++su1 = %d\n", su1);
	su1 = 5; su1++; printf("su1++=%d\n", su1);
	su2 = 12.3; ++su2; printf("++su2=%f\n", su2);
	su2 = 12.3; su2++; printf("su2++=%f\n", su2);
}
*/

/*
int main(void) {
	int su1, su2, su3;
	su1 = 10;
	su2 = ++su1;
	su1 = 10;
	su3 = su1++;
	printf("su2=%d\n", su2);
	printf("su3=%d\n", su3);
}
*/

/*
int main(void) {
	int a = 5, b = 6, c = 10, d;
	d = ++a * b--;
	printf("a==%d,b=%d,d=%d\n", a, b, d);
	d = a++ + ++c - b--;
	printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);
	a = 1;
	b = 0;
	d = a++ || ++b * d-- / ++c;
	printf("a=%d,b=%d,c=%d,d=%d\n",a, b, c, d);
	d = b++ && ++a / ++c * d++;
	printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);
}
*/

/*
int main(void) {
	int su;
	su = 8;
	(su % 2 == 0) ? printf("%d:짝수\n", su):
				  printf("%d:홀수\n", su);
	su = 9;
	(su % 2 == 0) ? printf("%d:짝수\n", su) :
		printf("%d:홀수\n", su);
}
*/

/*
int main()
{
	char name[20], hak[10], level;
	int kor, eng, mat, sum;
	double avg;
	printf("이름 입력 : ");
	scanf("%s", name);
	printf("학번 입력 : ");
	scanf("%s", hak);
	printf("3과목의 성적을 차례대로 입력 : ");
	scanf("%d%d%d", &kor, &eng, &mat);
	sum = kor + eng + mat;
	avg = (double)sum / 3;
	(avg >= 90) ? level = 'A' :
		(avg >= 80) ? level = 'B' :
		(avg >= 70) ? level = 'C' :
		(avg >= 60) ? level = 'D' :
		(level = 'F');
	printf("============================ 성적표 ============================\n");
	printf("이름\t학번\t국어\t영어\t수학\t총점\t평균\t학점\n");
	printf("----------------------------------------------------------------\n");
	printf("%s\t%s\t%d\t%d\t%d\t%d\t%.2f\t%c\n", name, hak, kor, eng, mat, sum, avg, level);
}
*/

/*
int main(void) {
	int su1 = 12, su2 = 7, result;

	result = su1 ^ su2;
	printf("su1과 su2의 바적논리합(XOR) : %d\n", result);
}
*/

/*
int main(void) {
	int su1 = 15;
	su1 = ~su1;
	printf("su1의 비트 부정: %d\n", su1);
}
*/

/*
int main(void) {
	int op = 30, result;
	result = op << 3;
	printf("30을 좌측으로 3비트 이동시킨 결과 = %d\n,", result);
}
*/

/*
int main(void) {
	int a = 0, b = 0, c = 0;
	printf("정수의 크기는 %d입니다 \n", sizeof(int));
	a = (b = 3, c = 5, b + c);
	printf("a=%d,b=%d,c=%d\n", a, b, c);
}
*/

/*
int main(void) {
	int su1 = 123;
	char ch = 'a';
	float su2 = 12.345;

	printf("변수 su1의 크기    :%d byte\n", sizeof(su1));
	printf("문자형 자료형의크기  :%d\n byte\n", sizeof(char));
	printf("수식(su1+su2)의 크기  :%d byte\n", sizeof(su1 + su2));
	printf("실수 1.23456 의 크기  :%d byte\n", sizeof(1.23456));
	printf("문자형 상수 'a'의 크기 :%d byte\n", sizeof('a'));
}
*/

/*
int main(void) {
	int su1, su2, su3;
	float result;
	result = (su1 = 5, su2 = su1 + 2, su2++, su3 = su2 / su1);
	printf("su1=%d\n su2=%d\n"
		"su3=%d\n result=%f\n", su1, su2, su3, result);
}
*/

/*
int main(void) {
	int num1, num2;
	scanf("%d%d", &num1, &num2);
	if (num1 > num2)
		printf("%d", num1 > num2);
}*/

/*
int main(void) {
	int num1 = 1, num2 = 0;
	if (num1)
		printf("참");
	if (num2)
		printf("거짓");
}
*/


/*
int main(void) {
	if (1)
		printf("참이므로 출력");
	if (0)
		printf("거짓이므로 출력안함");
}
*/