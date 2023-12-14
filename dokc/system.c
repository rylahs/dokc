#include <stdio.h>

int main(void)
{
	char szCommand[512] = { 0 };
	printf("Input Command: ");
	gets_s(szCommand, sizeof(szCommand));

	system(szCommand); // 보안 사고
	// system("notepad.exe");
}