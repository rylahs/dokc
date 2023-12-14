#include <stdio.h>

// 필수 실습 문제 (난이도 2, 제한시간 : 20분)

// 사용자로부터 점수 (0 ~ 100)을 입력 받아 80점 이상이면
// '합격' 그렇지 않으면 '불합격' 이라고 출력하는 프로그램을 작성
// 반드시 3항 연산자를 사용

// 점수를 입력하세요: 80
// 결과: 합격


int main(void)
{
	int nInputScore = 0;

	printf("점수를 입력하세요 : ");
	scanf_s("%d", &nInputScore);

	printf("결과: %s\n", (nInputScore >= 80) ? "합격" : "불합격");
	
	return 0;
}