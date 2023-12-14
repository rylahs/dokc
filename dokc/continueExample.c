#include <stdio.h>

int main(void)
{
	char ch = 'A';

	while (1)
	{
		ch = getchar();
		if (ch == 'x')
			break;

		if (ch == 'q')
			continue;

		putchar(ch);
	}

	return 0;
}