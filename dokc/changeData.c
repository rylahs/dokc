#include <stdio.h>

int main(void)
{
	int x = 5;

	printf("%d\n", 5 / 2); // int / int -> int
	printf("%f\n", 5.0 / 2); // double / int -> double
	printf("%f\n", 5 / 2.0); // int / double -> double
	
	printf("%f\n", (double)5 / 2); // double / int -> double
	printf("%f\n", (double)x / 2); // double / int -> double
	printf("%f\n", x / (double)2); // int / double -> double

	printf("%f\n", (double)(x / 2)); // double

	unsigned int data = 257;
	unsigned char ch = 0;
	ch = data;
	printf("%d\n", ch);

	return 0;
}