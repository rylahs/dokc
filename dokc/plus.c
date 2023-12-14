#include <stdio.h>

int main(void)
{
	int x = 10;

	x = x + 1;
	printf("%d\n", x);

	x += 1;
	printf("%d\n", x);

	++x;
	printf("%d\n", x);

	printf("\n\n");

	int y = 0, nResult = 0;

	++y;
	printf("%d\n", y);

	y++;
	printf("%d\n", y);

	nResult = ++y;
	printf("%d, %d\n", nResult, y);

	nResult = y--;
	printf("%d, %d\n", nResult, y);


	return 0;
}