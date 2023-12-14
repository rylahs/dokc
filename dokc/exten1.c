#include <stdio.h>

void InitCounter(int nData);
void IncreaseCounter();

const int g_initData = 10;
extern int g_nCounter;

int main(void)
{
	InitCounter(g_initData);
	printf("%d\n", g_nCounter);
	IncreaseCounter();
	printf("%d\n", g_nCounter);
	return 0;
}