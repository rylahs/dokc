#include <stdio.h>

// 필수 실습 문제 (난이도 3, 제한시간 20분)

// 사용자로부터 1 ~ 9 범위의 정수를 입력 받아 그 수만큼 '*'를 출력하는 프로그램을 작성
// 사용자의 입력이 범위를 넘어서면 강제로 보정.
// *은 한 행에 이어서 출력하고 전체 출력이 끝나면 개행

int main(void)
{
	int nInput = 0;

	while (nInput < 1 || nInput > 9)
	{
		scanf_s("%d", &nInput);
		if (nInput < 1 || nInput > 9)
			puts("범위가 초과되었습니다. 다시 입력해주세요 (1 ~ 9)");
	}
	
	int i = 0;
	while (i < nInput)
	{
		putchar('*');
		putchar(' ');
		i++;
	}
	putchar('\n');

	return 0;
}