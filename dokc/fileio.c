#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;

	char ch = 'A';

	fopen_s(&fp, "Text.txt", "w");
	
	fputs("Text String!", fp);
	fclose(fp);

	fopen_s(&fp, "Text.txt", "r");
	if (fp == NULL)
		return 0;

	while ((ch = fgetc(fp)) != EOF)
		putchar(ch);

	fclose(fp);


	return 0;
}