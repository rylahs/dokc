#include <stdio.h>

int main(void)
{

	char astrList[2][12] = { "Hello", "World" };
	// char* *pstrList = astrList
	char(*pstrList)[12] = astrList;

	puts(*pstrList);
	puts(pstrList[0]);
	puts(*(pstrList + 1));
	puts(pstrList[1]);

	return 0;
}
