#include <stdio.h>

int main(void)
{

	char szName[32] = { 0, };

	printf("�̸��� �Է��ϼ��� : ");
	gets(szName);

	printf("����� �̸��� ");
	puts(szName);
	puts("�Դϴ�");

	return 0;
}