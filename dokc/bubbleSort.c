#include <stdio.h>
#include <stdlib.h>

// �ʼ� �ǽ� ���� (���̵� 3.5, ���ѽð� : 30��)
// for ���� ����� int[5] �迭�� ����� ������ ������������ �����ϴ� ���α׷��� �ۼ�
// ���� ���� �˰����� ���
// �� �迭 ��Ҹ� ���ϴ� �������� �� �迭 ����� ���� ����Ἥ ������� �ʵ��� ��ȯ


int main(void)
{
	int aList[5] = { 0, };
	for (int i = 0; i < 5; i++)
		scanf_s("%d", &aList[i]);

	for (int i = 0; i < 5; i++)
		printf("%d ", aList[i]);
	putchar('\n');


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

		for (int j = 0; j < 5; j++)
			printf("%d ", aList[j]);
		putchar('\n');
	}



	return 0;
}