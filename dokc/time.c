#include <stdio.h>
// �ʼ� �ǽ� ���� (���̵� 2, ���ѽð� 30��)
// 
// ����ڷκ��� ������ ��(Second)�� �Է� �޾�
// '��:��:��' �������� ���. ��, ��, �� ������ ���
// �� �ڸ� ������ ǥ���ϰ� �� �ڸ� ������ ��� �տ� 0�� �ٿ� ���

// 4000
// 4000�ʴ� 1�ð� 06�� 40�� �Դϴ�.

int main(void)
{
	int timeInput = 0;
	scanf_s("%d", &timeInput);

	int h = 0, m = 0, s = 0;
	
	s = timeInput % 60;
	m = timeInput / 60 % 60;
	h = timeInput / 3600;

	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.\n", timeInput, h, m, s);
	printf("%02d:%02d:%02d\n", h, m, s);

	


	return 0;
}