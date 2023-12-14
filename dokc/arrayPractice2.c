#include <stdio.h>
#include <stdlib.h>

// 필수 실습 문제 (난이도 3, 제한시간 : 20분)
// for 문을 사용해 int[5] 배열에 저장된 값 중 가장 작은 값을 찾아 출력하는 프로그램을 작성
// int[0] 요소에 최소값이 저장될 수 있도록 개발
// 각 배열 요소를 비교하는 과정에서 두 배열 요소의 값은 덮어써서 사라지지 않도록 교환

// 50 40 10 50 20
// MAX : 50

int main(void)
{
	int aList[5] = { 0, };

	for (int i = 0; i < 5; i++)
		scanf_s("%d", aList + i, sizeof(aList[0]));

	
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (aList[j] < aList[i])
			{
				int tmp = aList[j];
				aList[j] = aList[i];
				aList[i] = tmp;
			}
		}

	}

	for (int i = 0; i < 5; i++)
		printf("%d ", aList[i]);
	putchar('\n');

	printf("MIN : %d", aList[0]);


	return 0;
}