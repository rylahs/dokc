#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �ʼ� �ǽ� ���� (���̵� 4, ���ѽð� 20��)
// �Ʒ� �ڵ� ���Կ� ���� ���ϰ� �ٸ��� �����Ͻÿ�

int main(void)
{
	char szBuffer[12] = { "HelloWorld" };
	char* pszData = NULL;
	pszData = (char*)malloc(sizeof(char) * 12);
	
	if (pszData == NULL)
		return 1;

	memcpy(pszData, szBuffer, sizeof(szBuffer));

	puts(pszData);

	free(pszData);


	return 0;
}