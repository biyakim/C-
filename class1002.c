#include <stdio.h>

/*float avrg(int x, int y);
void show_avrg(int, int, float);

int main(void) {
	int i, j, float f;
	i = 2; j = 3;
	f = avrg(i, j);
	show_avrg(i, j, f);
}
float avrg(int j, int k) {
	int total; float f;
	total = j + k;
	f = total / 2.0f;
	return f;
}
void show_avrg(int a, int b, float c) {
	printf("\n%d와 %d의 평균", a, b);
	printf("값은 %3.1f입니다.\n", c);
}*/

/*char big(int x, int y) {
	if (x > y)
		return 'Y';
	else if (x < y)
		return 'N';
	else 
		return '=';
}
void main(void) {
	int a = 100, b = 200;
	char size = big(a, b);

	if (size == 'Y')
		printf("\n %d는(은) %d보다 크다 . ", a, b);
	else if (size == 'N')
		printf("\n %d는(은)%d보다 작다. ", a, b);
	else if (size == '=')
		printf("\n %d는(은)%d과(와) 같다.", a, b);
}*/

/*void func(int a, int b);
int main(void) {
	int a = 5, b = 10;
	func(a, b);
	printf("a=%d,b=%d", a, b);
}
void func(int a, int b) {
	a += 5;
	b *= 10;
	printf("a=%d,b=%d", a, b);
}*/

/*void main(void) {
	printf("recursive function\n");
	main();
}*/

/*void main(void) {
	static int a = 0;
	if (a >= 3)
		return;
	else
		a = a + 1;
	printf("recursive function\n");
	main();
}*/

/*long fact(long n) {
	if (n == 1L)return 1L;
	else return (n * fact(n - 1));
}
void main(void) {
	long x = 5L;
	printf("\n %ld!의 값은 %ld이다.\n", x, fact(x));
}*/

/*int main(void) {
	int arr[5];
	int sum = 0, i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

	for (i = 0; i < 5; i++) {
		sum += arr[i];
	}
	printf("합 : %d\n", sum);
	return 0;
}*/

/*int main() {
	int arr[10];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	printf("%d%d%d%d%d", arr[0], arr[1], arr[2], arr[3], arr[4]);
	//printf("%d%d%d%d%d%d",arr[0],arr[1],arr[2],ar[3],arr[4],arr[5]);
}*/

/*int main(void) {
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5,6,7 };
	int arr3[5] = { 1,2 };
	int len1, len2, len3, i;

	printf("arr1의 크기 : %d\n", sizeof(arr1));
	printf("arr2의 크기 : %d\n", sizeof(arr2));
	printf("arr3의 크기 : %d\n", sizeof(arr3));

	len1 = sizeof(arr1) / sizeof(int);
	len2 = sizeof(arr2) / sizeof(int);
	len3 = sizeof(arr3) / sizeof(int);
	printf("arr : %d arr2 : %d arr3 : %d\n", len1, len2, len3);

	for (i = 0; i < len1; i++)
		printf("%d", arr1[i]);
	printf("\n");

	for (i = 0; i < len2; i++)
		printf("%d", arr2[i]);
	printf("\n");

	for (i = 0; i < len3; i++)
		printf("%d", arr3[i]);
	printf("\n");

}
*/

/*int main(void) {
	char str[14] = "Good morning";
	printf("%s\n", str);
	return 0;
}*/

/*int main(void) {
	char str[] = "Good morning!";
	printf("배열의 크기 : %d\n", sizeof(str));
	printf("%s\n",str);

	return 0;
}*/

/*int main(void) {
	char str[50];
	int idx = 0;
	printf("문자열 입력 : ");
	//scanf_s("%s", str);
	//gets(str);
	scanf_s("%[^\n]s", str);
	printf("입력 받은 문자열:%s\n", str);

	printf("문자 단위 출ㄹ8ㄱ : ");

	while (str[idx] != '\0') {
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
}*/

/*int main(void) {
	char str[50] = "I like C programing";
	printf("string : %s\n", str);

	str[8] = '\0';
	printf("string : %s\n",str);

	str[6] = '\0';
	printf("string : %s \n", str);

	str[1] = '\0';
	printf("string : %s \n", str);

	return 0;
}*/

/*int main(void) {
	int arr1[3][4];
	int arr2[7][9];
	printf("세로3, 가로4 : %d\n", sizeof(arr1));
	printf("세로7, 가로9 : %d\n", sizeof(arr2));
	return 0;
}*/

/*int main(void) {
	int a[3][3] = { 11,12,13,21,22,23,31,32,33 };
	int i, j;
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 3; ++j)
			printf("배열 요소 a[%d][%d] : %d", i, j, a[i][j]);
		printf("\n");
	}
}*/

/*int main(void) {
	int num_arr[5][5];
	int i, j, cnt = 1;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			num_arr[i][j] = cnt++;
	}
	for (i = 0; i < 5; ++i) {
		for (j = 0; j < 5; ++j) {
			printf("--%d--\t", num_arr[i][j]);
		}
		printf("\n");
	}
}*/

/*int main(void) {
	int num_arr[5][5];
	int i, j, cnt = 25;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			num_arr[i][j] = cnt--;
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d\t", num_arr[i][j]);
		}
		printf("\n");
	}
}*/

/*int main(void) {
	int num_arr[5][5];
	int i, j, cnt = 25;
	for (i = 0; i < 5; i++) {
		for (j = 4; j > -1; j--) {
			num_arr[i][j] = cnt--;
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d\t", num_arr[i][j]);
		}
		printf("\n");
	}
}*/

/*int main(void) {
	int num_arr[5][5];
	int i, j, cnt = 25;

	for (i = 0; i < 5; i++) {
		if (i % 2 == 0) {
			for (j = 0; j < 5; j++) {
				num_arr[j][i] = cnt++;
			}
		}
		else {
			for (j = 4; j > -1; j--) {
				num_arr[j][i] = cnt++;
			}
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d\t", num_arr[i][j]);
		}
		printf("\n");
	}
}*/

/*int main(void) {
	int num_arr[5][5];
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; i < 5; j++) {
			num_arr[i][j] = (i + j) % 5 + 1;
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d\t", num_arr[i][j]);
		}
		printf("\n");
	}
}
*/

/*int main(void) {
	int num = 5;
	int* pnum = &num;
	printf("pnum : %u\n", &pnum);
}*/

void int_swap(int* x, int* y);
int main(void) {
	int a = 100, b = 200;
	printf("교환전 : a=%d,b=%d\n", a, b);
	int_swap(&a, &b);
	printf("교환후 : a=%d,b=%d\n", a, b);
	return 0;
}
void int_swap(int* x, int* y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}