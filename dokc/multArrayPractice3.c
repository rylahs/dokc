#include <stdio.h>

int main(void)
{
	int aList[5][5] = { 0, };

	int cnt = 1;

	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 5; j++)
				aList[i][j] = cnt++;
		}
		
		else
		{
			for (int j = 4; j >= 0; j--)
				aList[i][j] = cnt++;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%2d ", aList[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
