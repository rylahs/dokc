#include <stdio.h>
int GetMax(int a, int b, int c)
{
	int nMax = a;
	if (b > nMax) nMax = b;
	if (c > nMax) nMax = c;
	return nMax;
}

int main(void)
{
	//int(__cdecl *pfGetMax)(int, int, int) = GetMax;
	int(*pfGetMax)(int, int, int) = GetMax;
	//int(*pfGetMax)(int, int, int) = 0x00007FF70E351366;
	/*int(__cdecl *pfGetMax)(int, int, int) = 
		(int(__cdecl*)(int, int, int))0x00007FF70E351366;*/
	printf("GetMax: %p\n", GetMax);
	printf("pfGetMax: %p\n", pfGetMax);
	
	printf("Max : %d\n", GetMax(1, 3, 2));
	printf("Max : %d\n", pfGetMax(1, 3, 2));
	
	return 0;
}

// GetMax: 00007FF70E351366
// pfGetMax: 00007FF70E351366
// GetMax: 00007FF640CB1366
//pfGetMax : 00007FF640CB1366

