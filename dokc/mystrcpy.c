#include <stdio.h>
// 필수 실습 문제 (난이도 4, 제한시간 30분)

// 두 char[]의 주소를 매개변수로 받아 문자열을 Deep Copy 하는 
// MyStrCpy() 함수를 작성
// 함수의 두 번쨰 매개변수는 첫 번쨰 매개변수의 메모리 크기가 되도록 구현

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