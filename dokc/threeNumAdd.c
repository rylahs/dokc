#include <stdio.h>

// �ʼ� �ǽ� ���� (���̵� 2, ���ѽð� 15��)

// ����ڷκ��� �� ������ �Է� �޾� �� ���� ���.
// ����� �Է��� ����Ǵ� ���� �ϳ��� ���� �����ϴ� ���� �ϳ��� ����ؼ� ����

// 1
// 2
// 3
// Total: 6

int main(void)
{
	int nInput = 0, nResult = 0;
	
	scanf_s("%d", &nInput);
	nResult += nInput;
	
	scanf_s("%d", &nInput);
	nResult += nInput;
	
	scanf_s("%d", &nInput);
	nResult += nInput;
	
	printf("Total: %d\n", nResult);
	return 0;
}