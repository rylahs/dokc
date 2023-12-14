#include <stdio.h>

int main(void)
{

	char ch = 'A';
	char* pData = &ch;
	char** ppData = &pData;
	char*** pppData = &ppData;

	printf("%c\n", ch);
	printf("%c\n", *pData);
	printf("%c\n", **ppData);
	printf("%c\n", ***pppData);
	
	printf("\n");

	char* astrList[3] = { "Hello", "World", "String" };

	printf("%s\n", astrList[0]);
	printf("%s\n", astrList[1]);
	printf("%s\n\n", astrList[2]);

	printf("%s\n", astrList[0] + 1);
	printf("%s\n", astrList[1] + 2);
	printf("%s\n\n", astrList[2] + 3);
	
	printf("%c\n", astrList[0][3]);
	printf("%c\n", astrList[1][3]);
	printf("%c\n\n", astrList[2][3]);

	return 0;
}
