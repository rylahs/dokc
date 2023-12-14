#include <stdio.h>

// 필수 실습 문제 (난이도 2, 제한시간 15분)

// 두 변수의 값을 교환하는 코드를 작성.
// 사용자로부터 두 정수를 입력 받아 각각을 int형 변수 a, b에 저장하고
// 임시변수 tmp를 활용해 a, b의 값을 교환한 후 출력하는 프로그램 작성

// 3 4
// a:4, b:3

int main(void)
{
	int a = 0, b = 0;

	scanf_s("%d%d", &a, &b);

	int tmp = 0;

	tmp = a;
	a = b;
	b = tmp;

	printf("a:%d, b:%d\n", a, b);



	return 0;
}