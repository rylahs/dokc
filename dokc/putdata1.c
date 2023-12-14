#include <stdio.h>

void PutData(char* pszName)
{
	if (*pszName == '\0')
		return;
	putchar(*pszName);
	PutData(pszName + 1);
}

int main(void)
{
	PutData("MintRisha");
	putchar('\n');

	return 0;
}