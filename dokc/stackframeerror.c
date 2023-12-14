#include <stdio.h>
void GetString(void)
{
	char szBuffer[8] = { 0 };
	int nData = 0x11223344;
	//gets(szBuffer);
	gets_s(szBuffer, sizeof(szBuffer));
	printf("%s, %08X\n", szBuffer, nData);
	return;
}

int main(void)
{
	GetString();
	return 0;
}