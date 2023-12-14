#include <stdio.h>
// 필수 실습 문제 (난이도 2, 제한시간 30분)
// 
// 사용자로부터 정수로 초(Second)를 입력 받아
// '시:분:초' 형식으로 출력. 시, 분, 초 정보는 모두
// 두 자리 정수로 표시하고 한 자리 숫자의 경우 앞에 0을 붙여 출력

// 4000
// 4000초는 1시간 06분 40초 입니다.

int main(void)
{
	int timeInput = 0;
	scanf_s("%d", &timeInput);

	int h = 0, m = 0, s = 0;
	
	s = timeInput % 60;
	m = timeInput / 60 % 60;
	h = timeInput / 3600;

	printf("%d초는 %02d시간 %02d분 %02d초 입니다.\n", timeInput, h, m, s);
	printf("%02d:%02d:%02d\n", h, m, s);

	


	return 0;
}