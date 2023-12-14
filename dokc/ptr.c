#include <stdio.h>

int main(void)
{

	int nData = 10;
	int* pnData = &nData;
	printf("%s\n", "nData");
	
	
	printf("%d\n", nData);
	printf("%p\n", &nData);
	printf("%p\n", "nData");

	return 0;
}