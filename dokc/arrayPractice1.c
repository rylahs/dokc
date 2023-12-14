#include <stdio.h>
#include <stdlib.h>

// 필수 실습 문제 (난이도 2, 제한시간 : 20분)
// for 문을 사용해 int[5] 배열에 저장된 값 중 가장 큰 값을 찾아 출력하는 프로그램을 작성
// 최대값이 저장된 변수는 int nMax로 선언

// 50 40 10 50 20
// MAX : 50

int main(void)
{
	int aList[5] = { 0, };

	for (int i = 0; i < 5; i++)
		scanf_s("%d", aList + i);

	int nMax = INT_MIN;

	for (int i = 0; i < 5; i++)
	{
		if (nMax < aList[i])
			nMax = aList[i];
	}

	printf("MAX: %d\n", nMax);


	return 0;
}