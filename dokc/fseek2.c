#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;
	char* pszData = "01234567890123456789012345678901";
	fopen_s(&fp, "Test.dat", "wb");

	fwrite(pszData, 32, 1, fp);
	

	fseek(fp, 5, SEEK_SET);
	fwrite("hello", 5, 1, fp);
	printf("size of Test.dat : %u\n", ftell(fp));
	return 0;
}