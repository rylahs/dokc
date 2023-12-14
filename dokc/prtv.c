#include <stdio.h>

int main(void)
{

	int aList[5] = { 0, };
	int* pnDataA = aList;
	// int *pnData = &aList[0];
	int* pnDataB = &aList[0];

	printf("pnDataA == pnDataB = %d\n", (pnDataA == pnDataB));

	printf("aList[0] : %d\n", aList[0]);
	
	*pnDataA = 20;
	printf("aList[0] : %d\n", aList[0]);
	printf("pnDataA[0] : %d\n", pnDataA[0]);


	return 0;
}