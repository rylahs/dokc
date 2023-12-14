#include <stdio.h>

// 필수 실습 문제 (난이도 3, 제한시간 : 20분)
// 5행 5열 사각형을 *로 출력하는 프로그램을 작성
// 반드시 for문을 중첩하는 구조로 개발

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *



int main(void)
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("* ");
		}
		putchar('\n');
	}

	return 0;
}