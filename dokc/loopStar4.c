#include <stdio.h>

// �ʼ� �ǽ� ���� (���̵� 3, ���ѽð� : 30��)
// �Ʒ��� ��ó�� �ﰢ���� *�� ����ϴ� ���α׷��� �ۼ�
// �ݵ�� for���� ��ø�ϴ� ������ ����
// '*' ���� ������ Tab���� ����

//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *



int main(void)
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 4 - i; j > 0; j--)
			printf("  ");

		for (int j = 0; j <= i; j++)
			printf("* ");

		for (int j = 0; j < i; j++)
			printf("* ");

		putchar('\n');
	}

	return 0;
}