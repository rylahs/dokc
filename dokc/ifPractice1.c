#include <stdio.h>
#include <stdlib.h>
// �ʼ� �ǽ� ���� (�ִ� ���ϱ�3 , ���̵� 2, ���ѽð� 10��)

// ����ڷκ��� �Է� ���� ���� �� ���� ū ���� ����ϴ� ���α׷��� �ۼ�
// ������ ��ȣ�� �ִ� 32��Ʈ ������ �����ϸ� scanf_s() �Լ��� �� ���� �� ���� �Է� �ް�
// ���������� �ִ��� ��� �����ϴ� ������ �ۼ�
// �ݵ�� if ���� ����� ��

// 10
// 20
// 30
// MAX: 30

int main(void)
{

	int nInput = 0;
	scanf_s("%d", &nInput);

	int maxValue = INT_MIN;
	if (maxValue <= nInput)
		maxValue = nInput;

	scanf_s("%d", &nInput);
	if (maxValue <= nInput)
		maxValue = nInput;

	scanf_s("%d", &nInput);
	if (maxValue <= nInput)
		maxValue = nInput;

	printf("MAX: %d\n", maxValue);
		
	return 0;
}
