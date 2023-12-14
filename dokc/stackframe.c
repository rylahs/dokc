#include <stdio.h>

int* TestFunc(void) 
{
	int nData = 10;
	return &nData;
}

int* TestFunc2(void)
{
	int a = 5;
	return NULL;
}

int main(int argc, char* argv[])
{
	int* pnResult = NULL;
	pnResult = TestFunc();
	TestFunc2();

	printf("%d\n", *pnResult);

	return 0;
}