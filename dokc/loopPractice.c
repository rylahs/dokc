#include <stdio.h>

// �ʼ� �ǽ� ���� (���̵� 3, ���ѽð� 20��)

// ����ڷκ��� 1 ~ 9 ������ ������ �Է� �޾� �� ����ŭ '*'�� ����ϴ� ���α׷��� �ۼ�
// ������� �Է��� ������ �Ѿ�� ������ ����.
// *�� �� �࿡ �̾ ����ϰ� ��ü ����� ������ ����

int main(void)
{
	int nInput = 0;

	while (nInput < 1 || nInput > 9)
	{
		scanf_s("%d", &nInput);
		if (nInput < 1 || nInput > 9)
			puts("������ �ʰ��Ǿ����ϴ�. �ٽ� �Է����ּ��� (1 ~ 9)");
	}
	
	int i = 0;
	while (i < nInput)
	{
		putchar('*');
		putchar(' ');
		i++;
	}
	putchar('\n');

	return 0;
}