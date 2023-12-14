#include <stdio.h>

int main(void)
{
	int nData = 10;
	const int* pnData = &nData; // nData 상수

	int* const pnNewData = &nData; // pnNewData 상수

	//*pnData = 20; // 불가능
	//pnNewData = NULL; // 불가능

	return 0;
}