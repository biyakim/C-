//#include <stdio.h>

//int main(void) {
	
	//printf("Hello world ! \n");
	//printf("\"Hello world !\" \n");
	//printf("Hello world ! \\ \n");
	//printf("이름 : 홍길동\n");
	//printf("나이 : 16\n");
	//printf("주소 : 산골짜기\n");
	//printf("이름 : 홍길동\n나이 : 16\n주소 : 산골짜기");
	//return 0;
//}

/*
#include <stdio.h>
#include <Windows.h> //Sleep()

int main(void) {

	printf("□□□□□0 % % \r");
	Sleep(1000); // 1/1000이 기본값 그래서 1000은 1초
	printf("■□□□□20 % % \r");
	Sleep(1000);
	printf("■■□□□40 % % \r");
	Sleep(1000);
	printf("■■■□□60 % % \r");
	Sleep(1000);
	printf("■■■■□80 % % \r");
	Sleep(1000);
	printf("■■■■■100 % % \r");
	
	return 0;
}
*/

/*
#include <stdio.h>

int main(void) {

	printf("1234567812345678123456781234567812345678\n");
	printf("1234567\t123\t12345678\t123\n");
	printf("abcdefg\tabc\tabcdefgh\tabc\n");
	printf("대한민국\t만세\t대한독립만세\t만만세\n");
}
*/

/*
#include <stdio.h>

int main(void) {

	printf("========================\n");
	printf("\t /)/)\n");
	printf("\t(  ..)\n");
	printf("\t(  >♡\n");
	printf("  Have a Good Time.\n");
	printf("========================\n");

	printf("\n");

	printf("\t####회비 정보####\n");
	printf("========================================\n");
	printf("이름\t나이\t전화번호\t회비\n");
	printf("========================================\n");
	printf("홍길동\t\"15\"\t010-123-1234\t\\20,000\n");
	printf("임꺽정\t\"20\"\t010-234-2345\t\\30,000\n");
	printf("김말이\t\"28\"\t010-345-3456\t\\50,000\n");
	printf("----------------------------------------\n");
	printf("총합계\t\t\t\\100,000");
	
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
	printf("정수 표현 : %d\n", 123);
	printf("정수 표현 : %d\n", 123.123);
	//서직제어문 %d를 실수로 호출하면 쓰레기값(아무값)을 출력
	printf("정수 표현 : %d %d\n", 123, 456);

	printf("\n 실수 표현 : %f\n", 456);
	//서식제어문 %f를 정수를 호출하면 그냥 0 처리됨.
	printf("실수 표현 : %f\n", 456.456);
	printf("실수 표현 : %f %f\n", 456.456, 123.123);
	return 0;
}
*/


/*
#include <stdio.h>

int main(void) {
	printf("\n문자열 표현 : %s\n", "안녕");
	printf("문자열 표현 : %s\t%s\n", "문자열", "표현방식");
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
	printf("%c %c\n", '한', '글');
	printf("%s %s\n", "한", "글");
	return 0;
}
*/

/*
#include <stdio.h>

int main(void) {

	printf("기본 값 : %d\n", 123);
	printf("설정 값 : %5d\n", 123);
	printf("설정 값 : %05d\n", 123);
	printf("설정 값 : %-05d\n", 123);
	printf("설정 값 : %5d%5d\n", 123,123);
	printf("설정 값 : %-5d%-5d\n", 123,123);
	return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
	printf("기본 값 : %f\n", 123.45678);
	printf("설정 값 : %10.3f\n", 123.45678);
	//%A.Bf에서 A는 소수점을 포함한 전체 칸 확복수
	//B는 소수 자리수 지정(단, 반오림 처리가됨)
	printf("설정 값 : %2.1f\n", 123.45678);
	printf("설정 값 : %.2f\n", 123.45678);
}
*/

/*
#include <stdio.h>

int main(void) {

	printf("1234567890123456789012345678901234567890\n");
	printf("%10s%10s\n", "대한민국", "만세");

	//printf("기본 값 : %s\n", "clang test");
	
	//printf("설정 값 : %20s\n", "clang test");

	//printf("설정 값 : %20.3s \n", "clang test");

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
	printf("이름\t나이\t주소\n");
	printf("홍길동\t%d\t산골짜기%d동%d호", 20, 102, 205);
	printf("이순신\t%d\t명랑 수심%dm", 28, 2000);
	return 0;
}
*/

/*
#include <stdio.h>

int main(void) {

	printf("이름 : %s\n","홍길동");
	printf("나이 : %d\n", 20);
	printf("Tel : %d-%d-%d\n", 010, 1234, 1234);
	printf("키 : %.1f\n", 178.5);
	printf("몸무게 : %d\n", 75);
	printf("혈액형 : %c\n", 'o');
	return 0;
}
*/

#include <stdio.h>

int main(void) {
	printf("\t\t\t\t%s\n", "파이썬 쇼핑몰");
	printf("%s : %d\n", "번호", 1078718855);
	printf("%s : %s\n", "주소", "서울시 종로구 종로3가");
	printf("%s : %s\n", "성명", "김사장");
	printf("%s : %d-%d-%d\n", "전화", 070, 1234, 5678);
	printf("------------------------------------------------------------------------------------------\n");
	printf("\t%s\t%s\t%s\t%s\n", "품명", "단가", "수량", "금액");
	printf("------------------------------------------------------------------------------------------\n");
	printf("  %s\t%s\t%d\t%s\n", "블루투스 이어폰", "85,000", 1, "85,000");
	printf("  %s\t%s\t%d\t%s\n", "USB3.0 8G", "8,000", 1, "8,000");
	printf("------------------------------------------------------------------------------------------\n");
	printf("%s\t\t\t\t\t%s\n", "소 계", "93,000");
	printf("------------------------------------------------------------------------------------------\n");
	printf("%s\t\t\t\t%s\n", "청구금액", "93,000");
	printf("%s\t\t\t\t%s\n", "받은금액", "1000,000");
	printf("%s\t\t\t\t%s\n", "거스름돈", "7,000");
	printf("------------------------------------------------------------------------------------------\n");
}