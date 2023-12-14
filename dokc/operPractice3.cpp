#include <stdio.h>

// 필수 실습 문제 (난이도 3, 제한시간 : 30분)

// 사용자로부터 입력 받은 정수 중 가장 큰 수를 출력하는 프로그램을 작성
// 정수는 부호가 있는 32비트 정수로 한정하며
// scanf_s() 함수로 한 번에 세 값을 모두 입력 받아야 함.
// 최대값은 prinf() 함수로 출력

// 10 20 30
// MAX: 30



int main(void)
{
	int a = 0, b = 0, c = 0;
	int maxScore = 0;

	scanf_s("%d%d%d", &a, &b, &c);
	maxScore = (a > b) ? a : b;
	maxScore = (maxScore > c) ? maxScore : c;

	printf("MAX: %d", maxScore);

	return 0;
}