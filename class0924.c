#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*int main(void) {
	int num1, num2;
	scanf_s("%d", &num1);
	num2 = num1 % 2;
	if (num2 == 0)
		printf("¦��");
	if (num2 != 0)
		printf("Ȧ��");
}*/

/*int main(void) {
	int su;
	printf("10 ���� ū ������ �Է��ϼ���...");
	scanf_s("%d", &su);
	if (su <= 10)
		printf("10 ������ ���� �Է��Ͽ����ϴ�\n");
	printf("%d", su);
   }
*/

/*int main(void) {
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num > 0)
		printf("�Է� ���� 0���� ũ��.\n");
	if (num > 50)
		printf("�Է� ���� 50���� ũ��.\n");
	if (num > 100)
		printf("�Է� ���� 100�����̴�\n");
}
*/

/*int main(void) {
	int opt;
	double num1, num2;
	double result;

	printf("1.���� 2.���� 3.���� 4.������\n");
	scanf("%d", &opt);
	printf("�� ���� �Ǽ� �Է� : ");
	scanf("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	if (opt == 2)
		result = num1 - num2;
	if (opt == 3)
		result = num1 * num2;
	if (opt == 4)
		result = num1 / num2;

	printf("��� : %f \n", result);
}*/

/*
int main(void) {
	int day;
	printf("���θ� �Է��Ͻÿ�");
	scanf_s("%d", &day);

	if (day%7==1)
		printf("������");
	if (day %7 == 2)
		printf("ȭ����");
	if (day %7 == 3)
		printf("������");
	if (day % 7 == 4)
		printf("�����");
	if (day % 7 == 5)
		printf("�ݿ���");
	if (day % 7 == 6)
		printf("�����");
	if (day % 7 == 0)
		printf("�Ͽ���");
}
*/


/*
int main(void) {
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);
	if (num % 3 == 0) {
		printf("3�� ��� %d\n", num);
	}
	int num1;
	printf("(���밪 ���ϱ�)�� �Է� : ");
	scanf_s("%d", &num1);
	if (num1 < 0)
		num1 *= -1;
	printf("���밪%d\n", num1);
	
	

	int num2;
	int num3;
	printf("�Է�\n");
	printf("ù��° ���� �Է� �ϼ��� : ");
	scanf_s("%d", &num2);
	printf("�ι�° ���� �Է� �ϼ��� : ");
	scanf_s("%d", &num3);

	printf("���\n");
	if (num2 > num3)
		printf("ù��° ���� �� Ů�ϴ�");
	if (num3 > num2)
		printf("�ι�° ���� �� Ů�ϴ�");
	if(num1==num2)
	    printf("�� ���� ���� �� �Դϴ�\n);
}*/

/*int main(void) {
	
	int num1, num2, num3;
	printf("�� ���� ���ʴ�� �Է� : ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	if (num1 >= num2 && num1 > num3)
		printf("%d�� ���� ū ���̴�\n", num1);
	if (num1< num2 && num2 >= num3)
		printf("%d�� ���� ū ���̴�\n", num2);
	if (num3 > num2 && num3 >= num1)
		printf("%d�� ���� ū ���̴�\n", num3);

	int num4, num5;
	printf("�� ���� ���ʴ�� �Է� : ");
	scanf_s("%d%d", &num4, &num5);
	if (num4 > num5 && num4 % 2 == 0)
		printf("%d�� ū���̸� ¦���̴�", num4);
	if (num4 < num5 && num5 % 2 == 0)
		printf("%d�� ū���̸� ¦���̴�", num5);

	int num6, num7,sum;
	printf("�� ���� ���ʴ�� �Է� : ");
	scanf_s("%d%d", &num6, &num7);
	sum = num6 + num7;
	if (sum % 2 == 0 && sum % 3 == 0)
		printf("�μ��� ���� %d�̰� ¦���̸� 3�� ����̴�\n", sum);
}
*/

/*
int main(void) {
	int num1, num2;
	scanf_s("%d%d", &num1, &num2);
	if (num1 > num2)
		printf("���̹Ƿ� %d", num1 > num2);
	else
		printf("�����̹Ƿ�%d", num1 > num2);
}
*/

/*int main(void) {
	int su1, su2, max, min;
	printf("���� �� ���� �Է��ϼ���...");
	scanf_s("%d%d", &su1, &su2);
	if (su1 > su2) {
		max = su1;
		min = su2;
	}
	else {
		max = su2;
		min = su1;
	}

	printf("\n max = %d min =%d", max, min);
}*/

/*int main(void) {
	int a = 10, b = 5;
	if (a > b) {
		if (a > 5) {
			printf("a�� 5���� ũ��");
		}
	}
	if (a > b && a > 5)
		printf("a�� 5���� ū �� ");
}
*/

/*int main(void) {
	int su;
	printf("���� �� ���� �Է��ϼ���...");
	scanf_s("%d", &su);
	if (su >= 0) {
		if ((su % 2) == 0)
			printf("  %d: ���� ¦��", su);
		else
			printf("  %d: ���� Ȧ��", su);
	}
	else
		printf("  %d: ����", su);
	printf("\n-----���α׷� ���� ��-----");
}*/

/*int main(void) {
	int num;
	printf("���� �Է��ϼ���...");
	scanf_s("%d", &num);

	if (num > 0)
		printf("\n 0���� ũ��");
	else if (num > 50)
		printf("\n 50���� ũ��");
	else if (num > 100)
		printf("\n 100���� ũ��");
	else
		printf("\n �հ�!!");
}*/

/*���������� ���� �¿��ش��� ó�� 30���� �⺻����� 1�δ� 3000���̴�. ���Ŀ��� 10�д�
500������ �߰� ����� �޴´�. ���� ź �ð��� �Է� �޾Ƽ� ��ü �ݾפ��� ����ϴ� ���α׷���
�ۼ��Ͽ���*/
/*int main(void) {
	int hores;
	int money;
	printf("���� ź �ð��� �Է��Ͻÿ� : ");
	scanf_s("%d", &hores);
	if (hores > 30) {
		money = 3000 + ((hores - 30) / 10) * 500;
		printf("��ü �ݾ��� %d�Դϴ�", money);

	}
	else {
		money = 3000;
		printf("��ü �ݾ��� %d�Դϴ�", money);
	}
}
*/
/*int main()
{
int time, money = 3000;
printf("���� ź �ð� �Է�(��) : ");
scanf_s("%d", &time);
time -= 30;//�⺻����� ���� �ʰ����� �߻��ߴ��� �Ǵ��Ϸ���....
if (time > 0) // ���̸� �ʰ���� �߻� �����̸� �⺻���
{
money = money + (time-1) / 10 * 500 + 500; //�ѹ��� ����Ҷ�.....�д���, 10�д��� �������
//if (time % 10 == 0) //10�д����� ź��� .....40��, 50��, 80��.....
// money = money + time / 10 * 500;
//else
// money = money + time / 10 * 500+500;
}
printf("���� ź ��� : %d��\n", money);
}
*/


/*��� ���ö��� �ֹ��ϴµ� 10�������� ���� 2500���̰� 10���� �ʰ��ϴ� �翡 ���ؼ��� ����
2400���̴�. ��� ���ö��� ������ �Է� �޾Ƽ� �ݾ��� ����ϴ� ���α׷��� �ۼ��϶�*/
/*int main(void) {
	int lunch;
	int money;
	printf("��� ���ö��� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &lunch);

	if (lunch <= 10) {
		money = lunch * 2500;
		printf("�� ���ö� �ݾ��� %d", money);
	}
	else if (lunch > 10) {
		money = 32500*10+(lunch - 10) * 2400;
		printf("�� ���ö� �ݾ��� %d", money);
	}
}
*/

/*���� 1�뿡 5000���Ѵ�. �׷��� �ѹ��� 10�� �̻��� ��� ��ü �ݾ��� 10%�� �����Ͽ� �ش�.
�׸��� 100�� �̻��� ��� ��ü �ݾ��� 12%�� �����Ͽ� �ش�. X���� ������ ����� �󸶰� �־�� �ϴ°�?*/
/*int main(void) {
	int count;
	int money;
	printf("�� ���� ������ �ǰ��� : ");
	scanf_s("%d", &count);

	if (count >= 100) {
		money = (count * 5000) - (count * 5000) * 0.12;
		printf("�� �ݾ� %d", money);
	}
	else if (count >= 10) {
		money = (count * 5000) - (count * 5000) * 0.1;
		printf("�� �ݾ� %d", money);
	}
	else {
		money = count * 5000;
		printf("�� �ݾ� %d", money);
	}

}
*/

/*�� ������ ������ �Է� �޾� �հ�� ����� ���ϰ� ����� 90�̻��̸� "A",80�̻��̸�"B",70�̻��̸�"C",60�̻��̸�
D",60�̸��̸�"F"�� ����Ͻÿ�*/
int main(void) {
	int num1, num2, num3;
	double avg;
	printf("�� ������ ������ �Է��Ͻÿ� : ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	avg = (num1 + num2 + num3) / 3;

	if (avg >= 90) {
		printf("A");
	}
	else if (avg >= 80) {
		printf("B");
	}
	else if (avg >= 70) {
		printf("C");
	}
	else if (avg >= 60) {
		printf("D");
	}
	else {
		printf("F");
	}
}
