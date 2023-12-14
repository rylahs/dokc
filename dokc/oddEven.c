#include <stdio.h>


int main(void)
{
	int a = 1;

	int resA = 999 % 2;
	int resB = 999 & 0x00000001;

	printf("%d\n", resA);
	printf("%d\n", resB);


	return 0;
}