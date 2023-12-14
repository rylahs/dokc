#include <stdio.h>

int main(void)
{
	char ch = 'A';

	while (1)
	{
		ch = getchar();
		if (ch == 'x')
			break;

		putchar(ch);
	}

	return 0;
}