#include <stdio.h>

int main(void)
{
	char szCommand[512] = { 0 };
	printf("Input Command: ");
	gets_s(szCommand, sizeof(szCommand));

	system(szCommand); // ���� ���
	// system("notepad.exe");
}