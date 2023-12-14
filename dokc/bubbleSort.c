#include <stdio.h>
#include <stdlib.h>

// 필수 실습 문제 (난이도 3.5, 제한시간 : 30분)
// for 문을 사용해 int[5] 배열에 저장된 값들을 오름차순으로 정렬하는 프로그램을 작성
// 버블 정렬 알고리즘을 사용
// 각 배열 요소를 비교하는 과정에서 두 배열 요소의 값은 덮어써서 사라지지 않도록 교환


int main(void)
{
	int aList[5] = { 0, };
	for (int i = 0; i < 5; i++)
		scanf_s("%d", &aList[i]);

	for (int i = 0; i < 5; i++)
		printf("%d ", aList[i]);
	putchar('\n');


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

		for (int j = 0; j < 5; j++)
			printf("%d ", aList[j]);
		putchar('\n');
	}



	return 0;
}