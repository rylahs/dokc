#include <stdio.h>
#include <stdlib.h>

// 문제 1. 사용자로부터 이름과 나이를 키보드로 입력 받아 출력하는 프로그램을 작성
// 이름은 gets_s(), 나이는 scanf_s() 함수로 입력 받고 printf 함수로 출력 (난이도 2, 제한시간 20분)

// 나이를 입력하세요: 20
// 이름을 입력하세요: 철수
// 
// 당신의 나이는 20살이고 이름은 '철수' 입니다.
int main(void)
{
	int nAge = 0;
	printf("나이를 입력하세요: ");
	scanf_s("%d%*c", &nAge);

	char szName[256] = { 0, };
	printf("이름을 입력하세요: ");
	gets_s(szName, sizeof(szName));

	printf("\n당신의 나이는 %d살이고 이름은 '%s' 입니다.", nAge, szName);


	return 0;
}