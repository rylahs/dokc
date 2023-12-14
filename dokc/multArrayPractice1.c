#include <stdio.h>

int main(void)
{
	int aList[3][4] = {
		{10, 20, 30},
		{40, 50, 60}
	};

	for (int i = 0; i < 2; i++)
	{
		int wLineSum = 0;

		for (int j = 0; j < 3; j++)
			wLineSum += aList[i][j];

		aList[i][3] = wLineSum;
	}

	for (int i = 0; i < 4; i++)
	{
		int hLineSum = 0;
		for (int j = 0; j < 2; j++)
			hLineSum += aList[j][i];

		aList[2][i] = hLineSum;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%d ", aList[i][j]);
		putchar('\n');
	}

	return 0;
}