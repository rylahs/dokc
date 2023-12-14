#include <stdio.h>

void PutData(char* pszParam)
{
	if (*pszParam == '\0')
		return;

	putchar(*pszParam);
	PutData(pszParam + 1);
}

int main(void)
{
	PutData("MintRisha");
	putchar('\n');
	return 0;
}