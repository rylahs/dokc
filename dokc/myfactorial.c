#include <stdio.h>

int MyFactorial(int nParam)
{
	int nResult = 0;
	if (nParam == 1)
		return 1;
	nResult = nParam * MyFactorial(nParam - 1);
	return nResult;
}

int main(void)
{
	int nInit = 5;
	printf("%d! == %d\n", nInit, MyFactorial(nInit));
	return 0;
}