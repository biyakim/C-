#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

/*int main(void) {
	int num;
	scanf_s("%d", &num);
	switch (num) {
	case 1:
		printf("1입력");
		break;
	case 2:
		printf("2입력");
		break;
	default:
		printf("1,2제외한 나머지 입력");
	}
}*/

/*int main(void) {
	char ch;
	scanf_s("%c", &ch);
	switch (ch) {
	case 'a':
		printf("a를 입력");
		break;
	case 'A':
		printf("A를 입력");
		break;
	}
}*/

/*int main(void) {
	int num, ret;
	scanf_s("%d", &num);
	ret = num % 3;
	switch (ret) {
	case 0:
		printf("3의 배수 \n");
		break;
	default:
		printf("3의 배수 아니다\n");
		break;
	}
}*/

/*int main(void) {
	char ch;
	printf("M:오전, A:오후, E:저녁\n");
	scanf_s("%c", &ch);
	switch (ch) {
	case 'M':
	case 'm':
		printf("Morning \n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon \n");
		break;
	case 'E':
	case 'e':
		printf("Evening \n");
		break;
	}
}*/


/*int main(void) {
	int num, data;
	while (1) {
		printf("==================================================\n");
		printf("1.정수 데이터를 입력하세요.\n");
		printf("2.정수 데이터를 출력합니다.\n");
		printf("3.프로그램을 종료합니다.\n");
		printf("==================================================\n");
		scanf_s("%d", &num);
		switch (num) {
			case 1:printf("데이터를 입력하세요.\n");
					scanf_s("%d", &data); break;
			case 2:printf("%d", data); getch(); break;
			case 3:exit(1);
		}
		system("cls");
			
	}
}*/

/*int main(void) {
	int a;
	while (1) {
		printf("1.계산기 2.그림판 3.노트패드 4.시스템 속성\n");
		printf("선택 : ");
		scanf_s("%d", &a);
		switch (a) {
		case 1:
			system("calc");
			break;
		case 2:
			system("mspaint");
			break;
		case 3:
			system("notepad");
			break;
		case 4:
			system("sysdm.cpl");
			break;
		default:
			return;

		}
		system("cls");
	}
}*/

/*1~10까지의 숫자를 입력 받아 1은 'one*, 2는 'two' 3은 'three'를 출력하고
그 이외는 'error'를 출력하시오*/

/*int main(void) {
	int num;
	printf("1~100까지의 숫자 중 하나를 입력하시오 : ");
	scanf_s("%d", &num);
	switch (num){
	case 1:
		printf("one");
		break;
	case 2:printf("two"); break;
	case 3:printf("three"); break;
	default:
		printf("error"); break;
	}
}
*/

/*선풍기 만들기(미풍,약풍,강풍,정지)*/
/*int main(void) {
	int menu;
	printf("1.미풍 2.약풍 3.강풍 4.정지\n>>>");
	scanf_s("%d", &menu);
	switch (menu) {
	case 1:printf("미풍!!!\n"); break;
	case 2:printf("약풍!!!\n"); break;
	case 3:printf("강풍!!!\n"); break;
	case 4:printf("정지!!!\n"); break;
	default:
		printf("잘못 누르셨습니다!!!\n"); break;
	}
}
*/

/*사직연산을 하는 계산기 만드시오*/
/*int main(void) {
	int num1, num2;
	char op;
	printf("연산식 입력 \n>>>");
	scanf_s("%d%d%d", &num1, &op, &num2);
	switch (op) {
	case '+':
		printf("%d%c%d=%d\n", num1, op, num2, num1 + num2);
		break;
	case '-':
		printf("%d%c%d=%d\n", num1, op, num2, num1 - num2);
		break;
	case '* ':
		printf("%d%c%d=%d\n", num1, op, num2, num1 * num2);
		break;
	case '/':
		printf("%d%c%d=%.2f\n", num1, op, num2, (double)num1 / num2);
		break;
	default:
		printf("잘못된 표현입니다");
	
	}
}*/

/*int main(void) {
	int su, sum = 0;

	for (su = 1; su <= 10; su++)
		sum += su;
	printf("sum=%d\n", sum);
}*/

/*int main(void) {
	int su, sum = 0;

	for (su = 10; su >= 1; su--)
		sum += su;
	printf("sum=%d\n", sum);
}*/

/*int main(void) {
	int su, sum = 0;

	for (su = 1; su <= 10; su++) {
		if (su % 2 == 1)
			sum += su;
	}
	printf("sum=%d\n", sum);
}*/

/*int main(void) {
	int su, sum = 0;
	
	for (su = 1; su <= 10; su++) {
		if (su % 2 == 1) {
			sum += su;
			su++;
		}
	}
	printf("sum=%d\n", sum);
}*/

/*int main(void) {
	int su, sum = 0;

	for (su = 1; su <= 10; su += 2)
		sum += su;
	printf("sum = %d\n", sum);
}*/

/*int main(void) {
	int su = 1, sum = 0;
	for (; su <= 10; )
		sum += su++;
	printf("sum=%d\n", sum);
}*/

/*int main(void) {
	int su1, su2, odd_sum = 0, even_sum = 0;

	for (su1 = 1, su2 = 2; (su1 <= 100 && su2 <= 100); su1 += 2, su2 += 2) {
		odd_sum += su1;
		even_sum += su2;
	}
	printf("홀수의 합 = %d\n", odd_sum);
	printf("짝수의 합 = %d\n", even_sum);
}*/

/*int main(void) {
	int num;
	for (num = 1; num <= 30; num++) {
		printf("%d\t", num);
		if (num % 5 == 0)
			printf("\n");
	}
}*/

/*int main(void) {
	int su;
	for (su = 1; su <= 4; su++) {
		printf("%d. Hello\n",su);
	}
}*/

/*int main(void) {
	char ch;
	for (ch = 'A'; ch <'Z'; ch++) {
		printf("%c. ",ch);
	}
	printf("Z \n");
}*/

/*int main(void) {
	char ch;
	for (ch = 'A'; ch <='Z'; ch++) {
		printf("%c, ", ch);
	}
	printf("\b\b \n");
}
*/

/*int main(void) {
	int su1, su2, sum = 0;

	for (su1 = 1; su1 <= 10; su1++) {
		for (su2 = 1; su2 <= 10; su2++) {
			sum += 1;
		}
		
	}
	printf("sum=%d\n", sum);
}
*/

/*int main(void) {
	int su1, su2;

	for (su1 = 1; su1 <= 3; su1++) {
		for (su2 = 1; su2 <= 3; su2++) {
			printf("su1=%d\t su2=%d\n", su1, su2);
		}
	}
}*/

/*int main(void) {
	int i, j;
	printf("----------------------------------------------------------------------------\n");
	printf("\t\t\t******구 구 단******\n");
	printf("----------------------------------------------------------------------------\n");
	for (i = 2; i <= 9; i++)
		printf("%d단\t", i);
	printf("\n");
	printf("----------------------------------------------------------------------------\n");
	for (i = 1; i <= 9; i++) {
		for (j = 2; j <= 9; j++) {
			printf("%d*%d=%d\t", j, i, j * i);
		}
		printf("\n");
	}
}*/

/*int main(void) {
	int day, money = 1, save = 1;
	for (day = 2; day <= 30; day++) {
		money *= 2;
		save += money;
	}
	printf("마지막 입금액 : %d원\n총 적축 금액 : %d원\n",money,save);
}*/

/*int main(void) {
	int i, sum1 = 0, sum2 = 0;
	for (i = 1; i <= 1000; i++) {
		sum1 += i;
		if (i % 3 == 0 && i % 5 != 0)
			sum2 += i;
	}
	printf("결과 : %d\n", sum1 - sum2);
}*/

/*int main(void) {
	int i, sum = 0;
	for (i = 1;; i + 2) {
		sum += i;
		if (sum >= 10000)
			break;
	}
	printf("결과 : %d\n", i);
}*/
