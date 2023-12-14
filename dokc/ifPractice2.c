#include <stdio.h>

// 필수 실습 문제 (난이도 2, 제한시간 20분)

// 버스 기본 요금을 1000원으로 가정하고 20세 미만인 경우에는 요금을 25% 할인하고 
// 20세 이상 성인은 할인하지 않음 
// 단 나이가 20을 넘는 경우 20으로 강제 조정해 출력할 것.

// 15
// 나이: 15, 최종요금: 750원
// 25
// 나이: 20, 최종요금: 1000원

int main(void)
{
	int nAge = 0, busMoney = 1000;

	scanf_s("%d", &nAge);

	if (nAge < 20)
		busMoney *= 0.75;
	else
		nAge = 20;

	printf("나이: %d, 최종요금: %d원\n", nAge, busMoney);


	return 0;
}