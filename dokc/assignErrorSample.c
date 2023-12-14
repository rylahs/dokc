#include <stdio.h>

int main(void)
{

	char szBuffer[16] = { 0, };
	int x = 0;
	// 상수에 대입 연산 진행할 수 없다. 상수는 RValue
	// 3 = 4;
	x = 4;
	// 배열 이름은 '주소 상수'이다. 변수가 아니다
	//szBuffer = 'A';

	szBuffer[0] = 'A';


	return 0;
}