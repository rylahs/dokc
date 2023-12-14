#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;
	fopen_s(&fp, "CON", "r+");

	fputs("Hello, World!\n", fp);
	
	puts("Hello, World!\n");

	fputs("Hello, World!\n", stdout);

	char szBuffer[32] = { 0 };
	fgets(szBuffer, sizeof(szBuffer), fp);
	fputs(szBuffer, stdout);

	fclose(fp);

	return 0;
}