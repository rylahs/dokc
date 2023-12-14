#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int aList[16];
	printf("%lld\n", sizeof(aList));
	printf("%lld\n", _countof(aList));

	return 0;
}