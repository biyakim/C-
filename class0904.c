//#include <stdio.h>

//int main(void) {
	
	//printf("Hello world ! \n");
	//printf("\"Hello world !\" \n");
	//printf("Hello world ! \\ \n");
	//printf("�̸� : ȫ�浿\n");
	//printf("���� : 16\n");
	//printf("�ּ� : ���¥��\n");
	//printf("�̸� : ȫ�浿\n���� : 16\n�ּ� : ���¥��");
	//return 0;
//}

/*
#include <stdio.h>
#include <Windows.h> //Sleep()

int main(void) {

	printf("������0 % % \r");
	Sleep(1000); // 1/1000�� �⺻�� �׷��� 1000�� 1��
	printf("������20 % % \r");
	Sleep(1000);
	printf("������40 % % \r");
	Sleep(1000);
	printf("������60 % % \r");
	Sleep(1000);
	printf("������80 % % \r");
	Sleep(1000);
	printf("������100 % % \r");
	
	return 0;
}
*/

/*
#include <stdio.h>

int main(void) {

	printf("1234567812345678123456781234567812345678\n");
	printf("1234567\t123\t12345678\t123\n");
	printf("abcdefg\tabc\tabcdefgh\tabc\n");
	printf("���ѹα�\t����\t���ѵ�������\t������\n");
}
*/

/*
#include <stdio.h>

int main(void) {

	printf("========================\n");
	printf("\t /)/)\n");
	printf("\t(  ..)\n");
	printf("\t(  >��\n");
	printf("  Have a Good Time.\n");
	printf("========================\n");

	printf("\n");

	printf("\t####ȸ�� ����####\n");
	printf("========================================\n");
	printf("�̸�\t����\t��ȭ��ȣ\tȸ��\n");
	printf("========================================\n");
	printf("ȫ�浿\t\"15\"\t010-123-1234\t\\20,000\n");
	printf("�Ӳ���\t\"20\"\t010-234-2345\t\\30,000\n");
	printf("�踻��\t\"28\"\t010-345-3456\t\\50,000\n");
	printf("----------------------------------------\n");
	printf("���հ�\t\t\t\\100,000");
	
	return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
	printf("Hello Everybody \n");
	printf("%d\n", 1234);
	printf("%d %d \n", 10, 20);

	return 0;
}
*/

/*
#include <stdio.h>

int main(void) {

	printf("%d\n", 123);
	printf("%d %d\n", 123);
	printf("%d\n", 123, 321);
	printf("%d %d\n", 123, 321);
	printf("%d+%d=%d\n", 123, 321, 123 + 321);
	return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
	printf("���� ǥ�� : %d\n", 123);
	printf("���� ǥ�� : %d\n", 123.123);
	//������� %d�� �Ǽ��� ȣ���ϸ� �����Ⱚ(�ƹ���)�� ���
	printf("���� ǥ�� : %d %d\n", 123, 456);

	printf("\n �Ǽ� ǥ�� : %f\n", 456);
	//������� %f�� ������ ȣ���ϸ� �׳� 0 ó����.
	printf("�Ǽ� ǥ�� : %f\n", 456.456);
	printf("�Ǽ� ǥ�� : %f %f\n", 456.456, 123.123);
	return 0;
}
*/


/*
#include <stdio.h>

int main(void) {
	printf("\n���ڿ� ǥ�� : %s\n", "�ȳ�");
	printf("���ڿ� ǥ�� : %s\t%s\n", "���ڿ�", "ǥ�����");
	return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
	printf("%c %c\n", 'a', 'A');
	printf("%c %c\n", 97, 65);
	printf("%d %d\n", 'a', 'A');
	printf("%c %c\n", "a", "A");
	printf("%c %c\n", '��', '��');
	printf("%s %s\n", "��", "��");
	return 0;
}
*/

/*
#include <stdio.h>

int main(void) {

	printf("�⺻ �� : %d\n", 123);
	printf("���� �� : %5d\n", 123);
	printf("���� �� : %05d\n", 123);
	printf("���� �� : %-05d\n", 123);
	printf("���� �� : %5d%5d\n", 123,123);
	printf("���� �� : %-5d%-5d\n", 123,123);
	return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
	printf("�⺻ �� : %f\n", 123.45678);
	printf("���� �� : %10.3f\n", 123.45678);
	//%A.Bf���� A�� �Ҽ����� ������ ��ü ĭ Ȯ����
	//B�� �Ҽ� �ڸ��� ����(��, �ݿ��� ó������)
	printf("���� �� : %2.1f\n", 123.45678);
	printf("���� �� : %.2f\n", 123.45678);
}
*/

/*
#include <stdio.h>

int main(void) {

	printf("1234567890123456789012345678901234567890\n");
	printf("%10s%10s\n", "���ѹα�", "����");

	//printf("�⺻ �� : %s\n", "clang test");
	
	//printf("���� �� : %20s\n", "clang test");

	//printf("���� �� : %20.3s \n", "clang test");

	return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
	printf("Decimal : %d\n", 173);
	printf("Decimal : %d\n", 0255);
	printf("Decimal : %d\n", 0xAD);

	printf("Octal : %o\n", 173);
	printf("Octal : %o\n", 0255);
	printf("Octal : %o\n", 0xAD);

	printf("Hexadecimal : %x\n", 173);
	printf("Hexadecimal : %x\n", 0255);
	printf("Hexadecimal : %x\n", 0xAD);
}
*/

/*
#include <stdio.h>

int main(void) {
	printf("%d*%d=%d\n", 4, 5, 4 * 5);
	printf("%d*%d*=%d\n", 7, 9, 7 * 9);
	return 0;
}
*/

/*
#include <stdio.h>

int main(void) 

	printf("======================================\n");
	printf("�̸�\t����\t�ּ�\n");
	printf("ȫ�浿\t%d\t���¥��%d��%dȣ", 20, 102, 205);
	printf("�̼���\t%d\t��� ����%dm", 28, 2000);
	return 0;
}
*/

/*
#include <stdio.h>

int main(void) {

	printf("�̸� : %s\n","ȫ�浿");
	printf("���� : %d\n", 20);
	printf("Tel : %d-%d-%d\n", 010, 1234, 1234);
	printf("Ű : %.1f\n", 178.5);
	printf("������ : %d\n", 75);
	printf("������ : %c\n", 'o');
	return 0;
}
*/

#include <stdio.h>

int main(void) {
	printf("\t\t\t\t%s\n", "���̽� ���θ�");
	printf("%s : %d\n", "��ȣ", 1078718855);
	printf("%s : %s\n", "�ּ�", "����� ���α� ����3��");
	printf("%s : %s\n", "����", "�����");
	printf("%s : %d-%d-%d\n", "��ȭ", 070, 1234, 5678);
	printf("------------------------------------------------------------------------------------------\n");
	printf("\t%s\t%s\t%s\t%s\n", "ǰ��", "�ܰ�", "����", "�ݾ�");
	printf("------------------------------------------------------------------------------------------\n");
	printf("  %s\t%s\t%d\t%s\n", "������� �̾���", "85,000", 1, "85,000");
	printf("  %s\t%s\t%d\t%s\n", "USB3.0 8G", "8,000", 1, "8,000");
	printf("------------------------------------------------------------------------------------------\n");
	printf("%s\t\t\t\t\t%s\n", "�� ��", "93,000");
	printf("------------------------------------------------------------------------------------------\n");
	printf("%s\t\t\t\t%s\n", "û���ݾ�", "93,000");
	printf("%s\t\t\t\t%s\n", "�����ݾ�", "1000,000");
	printf("%s\t\t\t\t%s\n", "�Ž�����", "7,000");
	printf("------------------------------------------------------------------------------------------\n");
}