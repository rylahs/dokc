#include <stdio.h>
#include <stdlib.h>

// �ʼ� �ǽ� ���� (���̵� 2, ���ѽð� : 20��)
// for ���� ����� int[5] �迭�� ����� �� �� ���� ū ���� ã�� ����ϴ� ���α׷��� �ۼ�
// �ִ밪�� ����� ������ int nMax�� ����

// 50 40 10 50 20
// MAX : 50

int main(void)
{
	int aList[5] = { 0, };

	for (int i = 0; i < 5; i++)
		scanf_s("%d", aList + i);

	int nMax = INT_MIN;

	for (int i = 0; i < 5; i++)
	{
		if (nMax < aList[i])
			nMax = aList[i];
	}

	printf("MAX: %d\n", nMax);


	return 0;
}