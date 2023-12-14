#include <stdio.h>
int main(void)
{
	int nInput = 0, nSelect = 0;
	scanf_s("%d", &nInput);

	if (nInput <= 10)
		nSelect = 20;
	else
		nSelect = 40;

	printf("%d\n", nSelect);
	return 0;
}