#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char szBuffer[] = "TestString";
	char* pszData = "TestString";

	printf("%d\n", strcmp(szBuffer, pszData));
	printf("%d\n", strcmp("TestString", pszData));
	printf("%d\n", strcmp("Test", "TestString"));
	printf("\n");




	return 0;
}