#include <stdio.h>

// 필수 실습 문제 (난이도 2, 제한시간 15분)

// 사용자로부터 세 정수를 입력 받아 총 합을 출력.
// 사용자 입력이 저장되는 변수 하나와 값을 누적하는 변수 하나만 사용해서 구현

// 1
// 2
// 3
// Total: 6

int main(void)
{
	int nInput = 0, nResult = 0;
	
	scanf_s("%d", &nInput);
	nResult += nInput;
	
	scanf_s("%d", &nInput);
	nResult += nInput;
	
	scanf_s("%d", &nInput);
	nResult += nInput;
	
	printf("Total: %d\n", nResult);
	return 0;
}