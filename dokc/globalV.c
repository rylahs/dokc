#include <stdio.h>

int g_nCounter = 0;

void InitCounter(int nData)
{
	g_nCounter = nData;
}

void IncreaseCounter()
{
	g_nCounter++;
}

int main(void)
{
	int nInput = 10;
	printf("%d %d\n", nInput, g_nCounter);
	InitCounter(nInput);
	printf("%d %d\n", nInput, g_nCounter);
	IncreaseCounter();
	printf("%d %d\n", nInput, g_nCounter);
	return 0;
}