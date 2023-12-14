#include <stdio.h>

int main(void)
{

	int nInput;

INPUT :
	printf("Input Number : ");
	scanf_s("%d", &nInput);

	if (nInput < 0 || nInput > 10)
	{
		puts("범위를 벗어났습니다. 올바른 범위를 입력해주세요 (0 ~ 10)");
		goto INPUT;
	}

	puts("END");

	return 0;
}