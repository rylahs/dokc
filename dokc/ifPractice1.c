#include <stdio.h>
#include <stdlib.h>
// 필수 실습 문제 (최댓값 구하기3 , 난이도 2, 제한시간 10분)

// 사용자로부터 입력 받은 정수 중 가장 큰 수를 출력하는 프로그램을 작성
// 정수는 부호가 있는 32비트 정수로 한정하며 scanf_s() 함수로 한 번에 한 값만 입력 받고
// 내부적으로 최댓값을 계속 갱신하는 구조로 작성
// 반드시 if 문을 사용할 것

// 10
// 20
// 30
// MAX: 30

int main(void)
{

	int nInput = 0;
	scanf_s("%d", &nInput);

	int maxValue = INT_MIN;
	if (maxValue <= nInput)
		maxValue = nInput;

	scanf_s("%d", &nInput);
	if (maxValue <= nInput)
		maxValue = nInput;

	scanf_s("%d", &nInput);
	if (maxValue <= nInput)
		maxValue = nInput;

	printf("MAX: %d\n", maxValue);
		
	return 0;
}
