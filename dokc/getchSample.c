#include <stdio.h>
#include <conio.h>

int main(void)
{

	char ch = 0;
	printf("Press Any Key Continue\n");

	ch = _getch();

	printf("입력한 키는 ");
	putchar(ch);
	printf("입니다.\n");

	return 0;
}