#include <stdio.h>

// �ʼ� �ǽ� ���� (���̵� 4, ���ѽð� 30��)
// ������ ���Ḯ��Ʈ ������ Ȱ���� ���Ḯ��Ʈ ��ü�� ������ ����ϴ� �Լ��� �ۼ��Ͻÿ�.
// �Լ��� �Ű������δ� ����� ����� �ּҸ� �޾ƾ� �ϸ� 
// ��� ȣ���� ���� ���� ���� �̵��ϵ��� ����

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
		{ "��ν�", "1234", NULL },
		{ "�̹���", "2345", NULL },
		{ "�����", "3456", NULL },
		{ "�����", "4567", NULL },
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