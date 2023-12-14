#include <stdio.h>

int main(void)
{
	int nInput = -1;
	while (nInput < 0 || nInput > 10)
	{
		printf("Input Number : ");
		scanf_s("%d", &nInput);
	}

	puts("END");

	return 0;
}