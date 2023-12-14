#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct USERDATA 
{
	int nAge;
	char szName[32];
	char szPhone[32];
} USERDATA;

USERDATA GetUserData(void)
{
	USERDATA user = { 0 };
	scanf_s("%d%*c", &user.nAge);

	gets_s(user.szName, sizeof(user.szName));
	gets_s(user.szPhone, sizeof(user.szPhone));
	return user;
}
USERDATA GetUserDataParam(USERDATA param)
{
	printf("%d살\t%s\t%s\t\n",
		param.nAge, param.szName, param.szPhone);

	USERDATA user = { 0 };
	scanf_s("%d%*c", &user.nAge);

	gets_s(user.szName, sizeof(user.szName));
	gets_s(user.szPhone, sizeof(user.szPhone));
	return user;
}

void GetUserDataPTR(USERDATA* pUser)
{
	USERDATA user = { 30, "MIN", "010-1234-4321"};

	memcpy(pUser, &user, sizeof(user));
	return;
}

int main(void)
{
	USERDATA* pUser = NULL;

	pUser = (USERDATA*)malloc(sizeof(USERDATA));

	if (pUser == NULL) {
		printf("Memory allocation failed.");
		return 1;
	}

	pUser->nAge = 10;
	strcpy_s(pUser->szName, sizeof(pUser->szName), "Hoon");
	strcpy_s(pUser->szPhone, sizeof(pUser->szPhone), "010-1234-1234");

	printf("%d살\t%s\t%s\n", pUser->nAge, pUser->szName, pUser->szPhone);

	


	USERDATA user = { 5, "Hohohoho", "010-1234-1234" };
	USERDATA res = { 0 };
	
	res = GetUserDataParam(user);
	GetUserDataPTR(pUser);

	printf("%d살\t%s\t%s\t\n",
		res.nAge, res.szName, res.szPhone);

	printf("%d살\t%s\t%s\n", pUser->nAge, pUser->szName, pUser->szPhone);


	free(pUser);
	return 0;
}