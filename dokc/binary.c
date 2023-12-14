#include <stdio.h>
#include <string.h>
typedef struct USERDATA
{
	char szName[32];
	char szPhone[32];
} USERDATA;

int main(void)
{
	FILE* fp = NULL;

	USERDATA UserData = { "Ho-sung", "123-1234" };

	fopen_s(&fp, "Test.dat", "wb");
	if (fp == NULL)
		return;

	fwrite(&UserData, sizeof(USERDATA), 1, fp);
	fwrite(&UserData, sizeof(USERDATA), 1, fp);
	fwrite(&UserData, sizeof(USERDATA), 1, fp);
	puts(UserData.szName);
	puts(UserData.szPhone);
	fclose(fp);

	memset(&UserData, 0, sizeof(USERDATA));
	fp = NULL;
	fopen_s(&fp, "Test.dat", "rb");
	if (fp == NULL)
		return 0;

	fread(&UserData, sizeof(USERDATA), 1, fp);
	printf("\n");
	
	puts(UserData.szName);
	puts(UserData.szPhone);


	fclose(fp);
	return 0;
}

