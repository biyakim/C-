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
	printf("���� su1�� su2�� ũ�� �� ���:%d\n", su1 <= su2);
	printf("���� su1�� su2�� ũ�� �� ���:%d\n", su1 >= su2);
	printf("���� su1�� su2�� ũ�� �� ���:%d\n", su1 == su2);
	printf("���� su1�� su2�� ũ�� �� ���:%d\n", su1 != su2);
	
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
	printf(" ������ �Է��ϼ���... ");
	scanf_s("%d", &num);
	if (!((num > 0) && (num <= 100)))
		printf("�Է� ������ ���� �����ϴ�.\n");
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
	(su % 2 == 0) ? printf("%d:¦��\n", su):
				  printf("%d:Ȧ��\n", su);
	su = 9;
	(su % 2 == 0) ? printf("%d:¦��\n", su) :
		printf("%d:Ȧ��\n", su);
}
*/

/*
int main()
{
	char name[20], hak[10], level;
	int kor, eng, mat, sum;
	double avg;
	printf("�̸� �Է� : ");
	scanf("%s", name);
	printf("�й� �Է� : ");
	scanf("%s", hak);
	printf("3������ ������ ���ʴ�� �Է� : ");
	scanf("%d%d%d", &kor, &eng, &mat);
	sum = kor + eng + mat;
	avg = (double)sum / 3;
	(avg >= 90) ? level = 'A' :
		(avg >= 80) ? level = 'B' :
		(avg >= 70) ? level = 'C' :
		(avg >= 60) ? level = 'D' :
		(level = 'F');
	printf("============================ ����ǥ ============================\n");
	printf("�̸�\t�й�\t����\t����\t����\t����\t���\t����\n");
	printf("----------------------------------------------------------------\n");
	printf("%s\t%s\t%d\t%d\t%d\t%d\t%.2f\t%c\n", name, hak, kor, eng, mat, sum, avg, level);
}
*/

/*
int main(void) {
	int su1 = 12, su2 = 7, result;

	result = su1 ^ su2;
	printf("su1�� su2�� ��������(XOR) : %d\n", result);
}
*/

/*
int main(void) {
	int su1 = 15;
	su1 = ~su1;
	printf("su1�� ��Ʈ ����: %d\n", su1);
}
*/

/*
int main(void) {
	int op = 30, result;
	result = op << 3;
	printf("30�� �������� 3��Ʈ �̵���Ų ��� = %d\n,", result);
}
*/

/*
int main(void) {
	int a = 0, b = 0, c = 0;
	printf("������ ũ��� %d�Դϴ� \n", sizeof(int));
	a = (b = 3, c = 5, b + c);
	printf("a=%d,b=%d,c=%d\n", a, b, c);
}
*/

/*
int main(void) {
	int su1 = 123;
	char ch = 'a';
	float su2 = 12.345;

	printf("���� su1�� ũ��    :%d byte\n", sizeof(su1));
	printf("������ �ڷ�����ũ��  :%d\n byte\n", sizeof(char));
	printf("����(su1+su2)�� ũ��  :%d byte\n", sizeof(su1 + su2));
	printf("�Ǽ� 1.23456 �� ũ��  :%d byte\n", sizeof(1.23456));
	printf("������ ��� 'a'�� ũ�� :%d byte\n", sizeof('a'));
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
		printf("��");
	if (num2)
		printf("����");
}
*/


/*
int main(void) {
	if (1)
		printf("���̹Ƿ� ���");
	if (0)
		printf("�����̹Ƿ� ��¾���");
}
*/