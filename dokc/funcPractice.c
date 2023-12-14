#include <stdio.h>
#include <stdlib.h>
// 필수 실습 문제 (난이도 3.5, 제한시간 : 30분)

// 사용자로부터 세 정수를 입력 받아 최댓값을 반환하는 함수를 작성
// 사용자 입력을 받는 부분과 최댓값을 계산하는 코드는 반드시 별도 함수로 분리

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