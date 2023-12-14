#include <stdio.h>

// 필수 실습 문제 (난이도 2, 제한시간 : 15분)

// 사용자로부터 두 정수를 입력 받아 뺄셈을 수행하고
// 결과를 출력하는 프로그램을 작성, 단, 절대로 뺄셈 연산자를 사용하지 않고
// 비트 연산자를 이용해서 구현

// 9 6
// 결과 : 3

int main(void)
{

	int a, b;
	scanf_s("%d%d", &a, &b);

	int res = a + (~b + 1); // 2의 보수 NOT + 1
	
	printf("결과 : %d\n", res);
	return 0;
}