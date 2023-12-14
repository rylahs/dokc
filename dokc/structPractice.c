#include <stdio.h>

// 필수 실습 문제 (난이도 4, 제한시간 30분)
// 간단한 연결리스트 예제를 활용해 연결리스트 전체의 내용을 출력하는 함수를 작성하시오.
// 함수의 매개변수로는 출력할 노드의 주소를 받아야 하며 
// 재귀 호출을 통해 다음 노드로 이동하도록 구현

typedef struct USERDATA
{
	char szName[32];
	char szPhone[32];

	struct USERDATA* pNext;
} USERDATA;


void PrintUserData(USERDATA* ptr)
{
	if (ptr == NULL)
		return;

	printf("[%p] %s, %s, pNext:[%p]\n", ptr, ptr->szName, ptr->szPhone, ptr->pNext);
	
	PrintUserData(ptr->pNext);
	return;
}


int main(void)
{
	USERDATA userList[4] = {
		{ "김두식", "1234", NULL },
		{ "이미현", "2345", NULL },
		{ "김봉석", "3456", NULL },
		{ "장희수", "4567", NULL },
	};

	USERDATA* pUser = NULL;

	userList[0].pNext = &userList[1];
	userList[1].pNext = &userList[2];
	userList[2].pNext = &userList[3];
	userList[3].pNext = NULL;

	pUser = &userList[0];

	while (pUser != NULL)
	{
		printf("%s, %s\n", pUser->szName, pUser->szPhone);
		pUser = pUser->pNext;
	}

	printf("\n\n");
	USERDATA* ptrUser = &userList[0];


	PrintUserData(ptrUser);

	return 0;
}