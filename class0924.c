#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*int main(void) {
	int num1, num2;
	scanf_s("%d", &num1);
	num2 = num1 % 2;
	if (num2 == 0)
		printf("짝수");
	if (num2 != 0)
		printf("홀수");
}*/

/*int main(void) {
	int su;
	printf("10 보다 큰 정수를 입력하세요...");
	scanf_s("%d", &su);
	if (su <= 10)
		printf("10 이하의 수를 입력하였습니다\n");
	printf("%d", su);
   }
*/

/*int main(void) {
	int num;
	printf("정수 입력 : ");
	scanf_s("%d", &num);

	if (num > 0)
		printf("입력 값은 0보다 크다.\n");
	if (num > 50)
		printf("입력 값은 50보다 크다.\n");
	if (num > 100)
		printf("입력 값은 100보다이다\n");
}
*/

/*int main(void) {
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈\n");
	scanf("%d", &opt);
	printf("두 개의 실수 입력 : ");
	scanf("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	if (opt == 2)
		result = num1 - num2;
	if (opt == 3)
		result = num1 * num2;
	if (opt == 4)
		result = num1 / num2;

	printf("결과 : %f \n", result);
}*/

/*
int main(void) {
	int day;
	printf("날싸를 입력하시오");
	scanf_s("%d", &day);

	if (day%7==1)
		printf("월요일");
	if (day %7 == 2)
		printf("화요일");
	if (day %7 == 3)
		printf("수요일");
	if (day % 7 == 4)
		printf("목요일");
	if (day % 7 == 5)
		printf("금요일");
	if (day % 7 == 6)
		printf("토요일");
	if (day % 7 == 0)
		printf("일요일");
}
*/


/*
int main(void) {
	int num;
	printf("숫자 입력 : ");
	scanf_s("%d", &num);
	if (num % 3 == 0) {
		printf("3의 배수 %d\n", num);
	}
	int num1;
	printf("(절대값 구하기)수 입력 : ");
	scanf_s("%d", &num1);
	if (num1 < 0)
		num1 *= -1;
	printf("절대값%d\n", num1);
	
	

	int num2;
	int num3;
	printf("입력\n");
	printf("첫번째 수를 입력 하세요 : ");
	scanf_s("%d", &num2);
	printf("두번째 수를 입력 하세요 : ");
	scanf_s("%d", &num3);

	printf("출력\n");
	if (num2 > num3)
		printf("첫번째 수가 더 큽니다");
	if (num3 > num2)
		printf("두번째 수가 더 큽니다");
	if(num1==num2)
	    printf("두 수가 같은 수 입니다\n);
}*/

/*int main(void) {
	
	int num1, num2, num3;
	printf("세 수를 차례대로 입력 : ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	if (num1 >= num2 && num1 > num3)
		printf("%d가 가장 큰 수이다\n", num1);
	if (num1< num2 && num2 >= num3)
		printf("%d가 가장 큰 수이다\n", num2);
	if (num3 > num2 && num3 >= num1)
		printf("%d가 가장 큰 수이다\n", num3);

	int num4, num5;
	printf("세 수를 차례대로 입력 : ");
	scanf_s("%d%d", &num4, &num5);
	if (num4 > num5 && num4 % 2 == 0)
		printf("%d가 큰수이며 짝수이다", num4);
	if (num4 < num5 && num5 % 2 == 0)
		printf("%d가 큰수이며 짝수이다", num5);

	int num6, num7,sum;
	printf("세 수를 차례대로 입력 : ");
	scanf_s("%d%d", &num6, &num7);
	sum = num6 + num7;
	if (sum % 2 == 0 && sum % 3 == 0)
		printf("두수의 합은 %d이고 짝수이며 3의 배수이다\n", sum);
}
*/

/*
int main(void) {
	int num1, num2;
	scanf_s("%d%d", &num1, &num2);
	if (num1 > num2)
		printf("참이므로 %d", num1 > num2);
	else
		printf("거짓이므로%d", num1 > num2);
}
*/

/*int main(void) {
	int su1, su2, max, min;
	printf("정수 두 개를 입력하세요...");
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
			printf("a는 5보다 크다");
		}
	}
	if (a > b && a > 5)
		printf("a는 5보다 큰 수 ");
}
*/

/*int main(void) {
	int su;
	printf("정수 한 개를 입력하세요...");
	scanf_s("%d", &su);
	if (su >= 0) {
		if ((su % 2) == 0)
			printf("  %d: 양의 짝수", su);
		else
			printf("  %d: 양의 홀수", su);
	}
	else
		printf("  %d: 음수", su);
	printf("\n-----프로그램 실행 끝-----");
}*/

/*int main(void) {
	int num;
	printf("점수 입력하세요...");
	scanf_s("%d", &num);

	if (num > 0)
		printf("\n 0보다 크다");
	else if (num > 50)
		printf("\n 50보다 크다");
	else if (num > 100)
		printf("\n 100보다 크다");
	else
		printf("\n 합격!!");
}*/

/*유원지에서 말을 태워준느데 처음 30분의 기본요금은 1인당 3000원이다. 이후에도 10분당
500원씩의 추가 요금을 받는다. 말을 탄 시간을 입력 받아서 전체 금액ㅇ르 계산하는 프로그램을
작성하여라*/
/*int main(void) {
	int hores;
	int money;
	printf("말을 탄 시간을 입력하시오 : ");
	scanf_s("%d", &hores);
	if (hores > 30) {
		money = 3000 + ((hores - 30) / 10) * 500;
		printf("전체 금액은 %d입니다", money);

	}
	else {
		money = 3000;
		printf("전체 금액은 %d입니다", money);
	}
}
*/
/*int main()
{
int time, money = 3000;
printf("말을 탄 시간 입력(분) : ");
scanf_s("%d", &time);
time -= 30;//기본요금을 빼서 초과분을 발생했는지 판단하려고....
if (time > 0) // 참이면 초과요금 발생 거짓이면 기본요금
{
money = money + (time-1) / 10 * 500 + 500; //한번에 계산할때.....분단위, 10분단위 상관없이
//if (time % 10 == 0) //10분단위로 탄경우 .....40분, 50분, 80분.....
// money = money + time / 10 * 500;
//else
// money = money + time / 10 * 500+500;
}
printf("말을 탄 요금 : %d원\n", money);
}
*/


/*배달 도시락을 주문하는데 10개까지는 개당 2500원이고 10개를 초과하는 양에 대해서는 개당
2400원이다. 배달 도시락의 개수를 입력 받아서 금액을 계산하는 프로그램을 작성하라*/
/*int main(void) {
	int lunch;
	int money;
	printf("배달 도시락의 개수를 입력하시오 : ");
	scanf_s("%d", &lunch);

	if (lunch <= 10) {
		money = lunch * 2500;
		printf("총 도시락 금액은 %d", money);
	}
	else if (lunch > 10) {
		money = 32500*10+(lunch - 10) * 2400;
		printf("총 도시락 금액은 %d", money);
	}
}
*/

/*디스켓 1통에 5000원한다. 그런데 한번에 10통 이상을 사면 전체 금액의 10%를 할인하여 준다.
그리고 100통 이상을 사면 전체 금액의 12%를 할인하여 준다. X통의 디스켓을 사려면 얼마가 있어야 하는가?*/
/*int main(void) {
	int count;
	int money;
	printf("몇 통을 구매할 건가요 : ");
	scanf_s("%d", &count);

	if (count >= 100) {
		money = (count * 5000) - (count * 5000) * 0.12;
		printf("총 금액 %d", money);
	}
	else if (count >= 10) {
		money = (count * 5000) - (count * 5000) * 0.1;
		printf("총 금액 %d", money);
	}
	else {
		money = count * 5000;
		printf("총 금액 %d", money);
	}

}
*/

/*세 과목의 성적을 입력 받아 합계와 평균을 구하고 평균이 90이상이면 "A",80이상이면"B",70이상이면"C",60이상이면
D",60미만이면"F"를 출력하시오*/
int main(void) {
	int num1, num2, num3;
	double avg;
	printf("세 과목의 성적을 입력하시오 : ");
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
