#include <stdio.h>

// �ʼ� �ǽ� ���� (���̵� 3, ���ѽð� : 30��)

// ���� ��� ����� 1000������ �����ϰ� ���̿� ����
//  ������ ���� ����� ������ ����

// 0 ~ 3	������	100% (����)
// 4 ~ 13	���	50%
// 14 ~ 19	û�ҳ�	25%
// 20 �̻�	����		0%

int main(void)
{
	int busMoney = 1000;
	int nAge = 0;

	scanf_s("%d", &nAge);
	if (nAge >= 20);
	else if (nAge >= 14)
		busMoney *= 0.75;
	else if (nAge >= 4)
		busMoney *= 0.5;
	else
		busMoney = 0;

	printf("Age : %d, BusMoney : %d\n", nAge, busMoney);


	return 0;
}
