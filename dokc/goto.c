#include <stdio.h>

int main(void)
{

	int nInput;

INPUT :
	printf("Input Number : ");
	scanf_s("%d", &nInput);

	if (nInput < 0 || nInput > 10)
	{
		puts("������ ������ϴ�. �ùٸ� ������ �Է����ּ��� (0 ~ 10)");
		goto INPUT;
	}

	puts("END");

	return 0;
}