#include <stdio.h>

// �ʼ� �ǽ� ���� (���̵� 3, ���ѽð� : 30��)

// ����ڷκ��� �Է� ���� ���� �� ���� ū ���� ����ϴ� ���α׷��� �ۼ�
// ������ ��ȣ�� �ִ� 32��Ʈ ������ �����ϸ�
// scanf_s() �Լ��� �� ���� �� ���� �Է� �ް� ���������� �ִ��� ��� �����ϴ� ������ �ۼ�

// 10
// 20
// 30
// MAX: 30



int main(void)
{
	int nInput = 0;
	
	scanf_s("%d", &nInput);
	int maxScore = 0;
	maxScore = nInput;

	scanf_s("%d", &nInput);
	maxScore = (maxScore >= nInput) ? maxScore : nInput;
	
	scanf_s("%d", &nInput);
	maxScore = (maxScore >= nInput) ? maxScore : nInput;

	printf("MAX: %d\n", maxScore);

	return 0;
}