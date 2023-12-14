#include <stdio.h>

// 필수 실습 문제 (난이도 2, 제한시간: 10분)

// 1 ~ 10 까지 총 합을 출력하는 프로그램을 작성
// while문과 for문으로 각각 작성하며 반복 횟수는 10회로 제한
// 반드시 총합을 누적하는 변수를 활용할 것

// Total : 55

int main(void)
{
	int nTotal = 0;
	int z = 1;
	while (z < 11)
	{
		nTotal += z;
		++z;
	}
	printf("While Loop Total : %d\n", nTotal);
	

	nTotal = 0;

	for (int i = 1; i < 11; i++)
		nTotal += i;

	printf("For Loop Total : %d\n", nTotal);


	return 0;
}