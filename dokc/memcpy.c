#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int aList[3] = { 1, 2, 3 };
	int bList[3] = { 4, 5, 6 };

	//aList = bList;

	char szBuffer[12] = { "HelloWorld" };
	char szNewBuffer[12] = { 0 };

	memcpy(szNewBuffer, szBuffer, 4);
	puts(szNewBuffer);
	
	memcpy(szNewBuffer, szBuffer, 6);
	puts(szNewBuffer);
	
	memcpy(szNewBuffer, szBuffer, sizeof(szBuffer));
	puts(szNewBuffer);

	char* pszData = NULL;
	pszData = (char*)malloc(sizeof(char) * 12);

	if (pszData == NULL)
		return 1;
	memcpy(pszData, szBuffer, sizeof(szBuffer));
	
	puts(pszData);

	free(pszData);


	return 0;
}