#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char szBuffer[32] = { "You are a girl." };

	printf("%c\n", szBuffer[0]);
	printf("%c\n", *szBuffer);
	printf("%c\n", *(szBuffer + 0));

	printf("%c\n", szBuffer[5]);
	printf("%c\n", *(szBuffer + 5));

	printf("%s\n", &szBuffer[4]);
	printf("%s\n", &*(szBuffer + 4));
	printf("%s\n", szBuffer + 4);


	printf("%p\n", &szBuffer[4]);
	printf("%p\n", szBuffer + 4);




	return 0;
}