#include <stdio.h>

int TestFunc(void)
{
	int x = 5;
	static int nData = 10;
	++nData;
	return nData;
}

int main(int argc, char* argv[])
{
	char* pszHello = "Hello World";
	printf("%s\n", pszHello);
	printf("%d\n", TestFunc());
	printf("%d\n", TestFunc());
	printf("%d\n", TestFunc());
	

	return 0;
}