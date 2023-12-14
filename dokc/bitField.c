#include <stdio.h>

typedef struct _DATAFLAG
{
	unsigned char main : 1;
	unsigned char left : 2;
	unsigned char right : 3;
	unsigned char top : 2;

} DATAFLAG;

int main(void)
{
	DATAFLAG flagSwitch = { 1, 3, 7, 4 };

	printf("%d\n", flagSwitch.main);
	printf("%d\n", *((unsigned char*)&flagSwitch) & 0x00);
	
	printf("%d\n", flagSwitch.left);
	printf("%d\n", *((unsigned char*)&flagSwitch) & 0x06 >> 1);
	printf("%d\n", flagSwitch.right);

	printf("%d\n", flagSwitch.top);
	printf("%X\n", *((unsigned char*)&flagSwitch));
	printf("%zd\n", sizeof(flagSwitch));

}