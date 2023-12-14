#include <stdio.h>

char GetGrade(int score)
{
	char ch = 'A';

	if (score >= 90)
		ch = 'A';
	else if (score >= 80)
		ch = 'B';
	else if (score >= 70)
		ch = 'C';
	else if (score >= 60)
		ch = 'D';
	else
		ch = 'F';

	return ch;
}

int GetResult()
{
	int nInput = 0;
	scanf_s("%d", &nInput);

	if (nInput < 0)
		nInput = 0;
	if (nInput > 100)
		nInput = 100;

	return nInput;
}

int main(void)
{
	int nResult = 0;
	nResult = GetResult();

	printf("당신의 학점은 '%c' (%d)입니다.\n",
		GetGrade(nResult), nResult);

	return 0;
}