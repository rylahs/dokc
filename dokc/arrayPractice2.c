#include <stdio.h>
#include <stdlib.h>

// �ʼ� �ǽ� ���� (���̵� 3, ���ѽð� : 20��)
// for ���� ����� int[5] �迭�� ����� �� �� ���� ���� ���� ã�� ����ϴ� ���α׷��� �ۼ�
// int[0] ��ҿ� �ּҰ��� ����� �� �ֵ��� ����
// �� �迭 ��Ҹ� ���ϴ� �������� �� �迭 ����� ���� ����Ἥ ������� �ʵ��� ��ȯ

// 50 40 10 50 20
// MAX : 50

int main(void)
{
	int aList[5] = { 0, };

	for (int i = 0; i < 5; i++)
		scanf_s("%d", aList + i, sizeof(aList[0]));

	
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (aList[j] < aList[i])
			{
				int tmp = aList[j];
				aList[j] = aList[i];
				aList[i] = tmp;
			}
		}

	}

	for (int i = 0; i < 5; i++)
		printf("%d ", aList[i]);
	putchar('\n');

	printf("MIN : %d", aList[0]);


	return 0;
}