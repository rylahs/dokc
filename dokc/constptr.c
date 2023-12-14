#include <stdio.h>

void PrintString(const char* pszParam)
{
	puts(pszParam);
}

int main(void)
{
	char szBuffer[32] = { "I am a boy." };

	const char* pszBuffer = szBuffer;
	szBuffer[0] = 'i';
	//*pszBuffer = 'I'; 

	PrintString(pszBuffer);
	PrintString("You are a girl.");


	return 0;
}