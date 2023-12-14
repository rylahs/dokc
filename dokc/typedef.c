#include <stdio.h>

typedef unsigned int UINT;
typedef const char* LPSTR;

int main(void)
{
	UINT uData = 10;
	printf("%u\n", uData);

	LPSTR pszData = NULL;
	pszData = "Hello World";
	printf("%s\n", pszData);
	return 0;
}
