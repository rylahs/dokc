#include <stdio.h>

int main(void)
{
	int nInput = 0;
	char ch = 'A';

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &nInput);

	if (nInput >= 80)
	{
		if (nInput >= 90)
			ch = 'A';
		else
			ch = 'B';
	}
	else
	{
		if (nInput >= 70)
			ch = 'C';
		else
		{
			ch = 'D';

			if (nInput < 60)
				ch = 'F';
		}
	}

	printf("Score : %d, Grade : %c\n", nInput, ch);

	return 0;
}