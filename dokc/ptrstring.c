#include <stdio.h>

int main(void)
{

	char szBuffer[16] = { "Hello" };
	char* pszData = szBuffer;
	int nLength = 0;
	while (*pszData != '\0')
	{
		pszData++;
		nLength++;
	}

	printf("&pszData : %p, &szBuffer : %p\n", pszData, szBuffer);
	printf("Length : %td == %d\n", pszData - szBuffer, nLength);


	return 0;
}