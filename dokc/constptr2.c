#include <stdio.h>

int main(void)
{
	int nData = 10;
	const int* pnData = &nData; // nData ���

	int* const pnNewData = &nData; // pnNewData ���

	//*pnData = 20; // �Ұ���
	//pnNewData = NULL; // �Ұ���

	return 0;
}