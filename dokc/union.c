#include <stdio.h>

typedef union _IP_ADDR
{
	int nAddress;
	short awData[2];
	unsigned char addr[4];
} IP_ADDR;

int main(void)
{
	IP_ADDR Data = { 0 };
	Data.nAddress = 0x41424344;

	printf("%c%c%c%c\n", Data.addr[0], Data.addr[1]
		, Data.addr[2], Data.addr[3]);

	printf("%X, %d\n", Data.awData[0], Data.awData[0]);
	printf("%X, %d\n", Data.awData[1], Data.awData[1]);
	printf("\n\n");

	Data.addr[0] = 192;
	Data.addr[1] = 168;
	Data.addr[2] = 0;
	Data.addr[3] = 1;

	printf("%d.%d.%d.%d\n", Data.addr[0], Data.addr[1]
		, Data.addr[2], Data.addr[3]);

	printf("%X, %d\n", Data.awData[0], Data.awData[0]);
	printf("%X, %d\n", Data.awData[1], Data.awData[1]);
	printf("\n\n");
	return 0;
}