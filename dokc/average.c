#include <stdio.h>
// 필수 실습 문제 (난이도 1, 제한시간 15분)
// 
// 사용자로부터 두 정수를 입력 받아 평균을 출력하는
// 예제를 작성. 입력은 반드시 scanf_s() 함수를 사용하고
// 출력은 printf() 함수를 이용할 것

// 평균 값 출력 시 반드시 소수점 둘째 자리 까지만 표시.

// 두 정수를 입력하세요.: 10 20
// AVG: 15.00

int main(void)
{

	int nInputA = 0, nInputB = 0;
	printf("두 정수를 입력하세요.: ");
	scanf_s("%d%d", &nInputA, &nInputB);

	double dbAvg = (double)(nInputA + nInputB) / 2;
	printf("%.2f", dbAvg);

	return 0;
}