#include <stdio.h>
#include <stdlib.h>

// ���� 1. ����ڷκ��� �̸��� ���̸� Ű����� �Է� �޾� ����ϴ� ���α׷��� �ۼ�
// �̸��� gets_s(), ���̴� scanf_s() �Լ��� �Է� �ް� printf �Լ��� ��� (���̵� 2, ���ѽð� 20��)

// ���̸� �Է��ϼ���: 20
// �̸��� �Է��ϼ���: ö��
// 
// ����� ���̴� 20���̰� �̸��� 'ö��' �Դϴ�.
int main(void)
{
	int nAge = 0;
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d%*c", &nAge);

	char szName[256] = { 0, };
	printf("�̸��� �Է��ϼ���: ");
	gets_s(szName, sizeof(szName));

	printf("\n����� ���̴� %d���̰� �̸��� '%s' �Դϴ�.", nAge, szName);


	return 0;
}