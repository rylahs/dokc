#include <stdio.h>

int main(void)
{

	char szBuffer[16] = { 0, };
	int x = 0;
	// ����� ���� ���� ������ �� ����. ����� RValue
	// 3 = 4;
	x = 4;
	// �迭 �̸��� '�ּ� ���'�̴�. ������ �ƴϴ�
	//szBuffer = 'A';

	szBuffer[0] = 'A';


	return 0;
}