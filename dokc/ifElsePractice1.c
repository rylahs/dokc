#include <stdio.h>

// 필수 실습 문제 (난이도 3, 제한시간 : 30분)

// 버스 기분 요금을 1000원으로 가정하고 나이에 따라
//  다음과 같이 요금을 할인율 적용

// 0 ~ 3	영유아	100% (무료)
// 4 ~ 13	어린이	50%
// 14 ~ 19	청소년	25%
// 20 이상	성인		0%

int main(void)
{
	int busMoney = 1000;
	int nAge = 0;

	scanf_s("%d", &nAge);
	if (nAge >= 20);
	else if (nAge >= 14)
		busMoney *= 0.75;
	else if (nAge >= 4)
		busMoney *= 0.5;
	else
		busMoney = 0;

	printf("Age : %d, BusMoney : %d\n", nAge, busMoney);


	return 0;
}
