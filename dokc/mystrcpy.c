#include <stdio.h>
// �ʼ� �ǽ� ���� (���̵� 4, ���ѽð� 30��)

// �� char[]�� �ּҸ� �Ű������� �޾� ���ڿ��� Deep Copy �ϴ� 
// MyStrCpy() �Լ��� �ۼ�
// �Լ��� �� ���� �Ű������� ù ���� �Ű������� �޸� ũ�Ⱑ �ǵ��� ����

void MyStrCpy(char* pszDst, unsigned int nSize, char* pszSrc)
{
	size_t nLenSrc = 0;
	nLenSrc = strlen(pszSrc);

	if (nLenSrc + 1 > nSize)
		return 0;

	for (int i = 0; i < nLenSrc; ++i)
		pszDst[i] = pszSrc[i];
}

int main(int argc, char* argv[])
{
	char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };

	MyStrCpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
	puts(szBufferDst);



	return 0;
}