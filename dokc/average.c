#include <stdio.h>
// �ʼ� �ǽ� ���� (���̵� 1, ���ѽð� 15��)
// 
// ����ڷκ��� �� ������ �Է� �޾� ����� ����ϴ�
// ������ �ۼ�. �Է��� �ݵ�� scanf_s() �Լ��� ����ϰ�
// ����� printf() �Լ��� �̿��� ��

// ��� �� ��� �� �ݵ�� �Ҽ��� ��° �ڸ� ������ ǥ��.

// �� ������ �Է��ϼ���.: 10 20
// AVG: 15.00

int main(void)
{

	int nInputA = 0, nInputB = 0;
	printf("�� ������ �Է��ϼ���.: ");
	scanf_s("%d%d", &nInputA, &nInputB);

	double dbAvg = (double)(nInputA + nInputB) / 2;
	printf("%.2f", dbAvg);

	return 0;
}