#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 필수 실습 문제 (난이도 4, 제한시간 20분)
// 아래 코드 결함에 대해 말하고 바르게 수정하시오

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