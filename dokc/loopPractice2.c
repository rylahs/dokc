#include <stdio.h>

// �ʼ� �ǽ� ���� (���̵� 2, ���ѽð�: 10��)

// 1 ~ 10 ���� �� ���� ����ϴ� ���α׷��� �ۼ�
// while���� for������ ���� �ۼ��ϸ� �ݺ� Ƚ���� 10ȸ�� ����
// �ݵ�� ������ �����ϴ� ������ Ȱ���� ��

// Total : 55

int main(void)
{
	int nTotal = 0;
	int z = 1;
	while (z < 11)
	{
		nTotal += z;
		++z;
	}
	printf("While Loop Total : %d\n", nTotal);
	

	nTotal = 0;

	for (int i = 1; i < 11; i++)
		nTotal += i;

	printf("For Loop Total : %d\n", nTotal);


	return 0;
}