#include <stdio.h>
#include <stdlib.h>
// �ʼ� �ǽ� ���� (���̵� 3.5, ���ѽð� : 30��)

// ����ڷκ��� �� ������ �Է� �޾� �ִ��� ��ȯ�ϴ� �Լ��� �ۼ�
// ����� �Է��� �޴� �κа� �ִ��� ����ϴ� �ڵ�� �ݵ�� ���� �Լ��� �и�

int Input(int a)
{
	scanf_s("%d", &a);
	return a;
}

int GetMaxNumber(int a, int b, int c)
{
	int maxNum = INT_MIN;

	if (maxNum < a)
		maxNum = a;
	if (maxNum < b)
		maxNum = b;
	if (maxNum < c)
		maxNum = c;

	return maxNum;
}

int main(void)
{
	int a = 0, b = 0, c = 0;
	a = Input(a); 
	b = Input(b); 
	c = Input(c);

	printf("MAX: %d\n", GetMaxNumber(a, b, c));

	return 0;
}