#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char szBuffer[] = "Hello";
	char* pszBuffer = szBuffer;

	char* pszHeap = malloc(sizeof(char) * 16);
	if (pszHeap == NULL)
		return 1;

	strcpy_s(pszHeap, 16, pszBuffer);

	puts(pszHeap);
	free(pszHeap);

	return 0;
}