#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;
	int nClosed = 0;
	fopen_s(&fp, "Test1.txt", "w");
	fopen_s(&fp, "Test2.txt", "w");
	fopen_s(&fp, "Test3.txt", "w");
	if (fp == NULL)
	{
		puts("ERROR: Failed to open file!");
		return;
	}

	// TODO : File I/O
	fprintf(fp, "%s\n", "Hello");

	nClosed = _fcloseall();
	printf("%d\n", nClosed);

	//fclose(fp);
}