#include <stdio.h>

int main(void)
{

	int n = 0;
	scanf_s("%d", &n);

	printf("�� : %d\n", n / 3);
	printf("������ : %d\n", n % 3);

	printf("Double : %f\n", (double)n / 3);

	return 0;
}