#include <stdio.h>

int main(void)
{
	char szBuffer[32];
	int nResult = 0;
	printf("Input String: ");
	gets_s(szBuffer, sizeof(szBuffer));

	nResult = atoi(szBuffer);
	printf("%d\n", nResult);

	printf("%d\n", atoi("2147483647"));
	printf("%d\n", atoi("2147483648"));
	printf("%e\n", atoi("1.7e+308"));
	printf("%e\n", atoi("1.7e+309"));

}