#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
	int* pList = NULL, * pNewList = NULL;
	int aList[3] = { 0 };

	pList = (int*)malloc(sizeof(int) * 3);
	if (pList == NULL) {
		printf("pList 초기화 실패\n");
		return 1;
	}


	memset(pList, 0, sizeof(int) * 3);

	pNewList = (int*)calloc(3, sizeof(int));
	if (pNewList == NULL)
	{
		free(pList);
		return 1;
	}

	for (int i = 0; i < 3; i++)
		printf("pList[%d]의 값 : %d\n", i, pList[i]);
	
	for (int i = 0; i < 3; i++)
		printf("pNewList[%d]의 값 : %d\n", i, pNewList[i]);

	free(pList);
	free(pNewList);


	return 0;
}