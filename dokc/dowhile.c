#include <stdio.h>

int main(void)
{

	char ch = 'A';

	do
	{
		ch = getchar();
		putchar(ch);
	} while (ch != 'x');

	while ((ch = getchar()) != 'x')
		putchar(ch);

	return 0;
}