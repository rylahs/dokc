#include <stdio.h>

// �ʼ� �ǽ� ���� (���̵� 3, ���ѽð� : 30��)

// ����ڷκ��� �Է� ���� ���� �� ���� ū ���� ����ϴ� ���α׷��� �ۼ�
// ������ ��ȣ�� �ִ� 32��Ʈ ������ �����ϸ�
// scanf_s() �Լ��� �� ���� �� ���� ��� �Է� �޾ƾ� ��.
// �ִ밪�� prinf() �Լ��� ���

// 10 20 30
// MAX: 30



int main(void)
{
	int a = 0, b = 0, c = 0;
	int maxScore = 0;

	scanf_s("%d%d%d", &a, &b, &c);
	maxScore = (a > b) ? a : b;
	maxScore = (maxScore > c) ? maxScore : c;

	printf("MAX: %d", maxScore);

	return 0;
}