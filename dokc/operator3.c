#include <stdio.h>

int main(void)
{


	// true 0ภฬ พฦดิ (+, -)
	// false : 0
	double a = 0.1;
	double b = 0.3;
	printf("%d\n", 0.1 + 0.1 + 0.1 == 0.3);
	printf("%d\n", 300 == 299.99999F);
	printf("%d\n", 300 == 299.99999);
	printf("%d\n", 300 == 299.9999F);
	printf("%d\n", 300 == 300.00001F);

	return 0;
}