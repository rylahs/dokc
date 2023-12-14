#include <stdio.h>
#include <string.h>



int main(void)
{
	char szPath[128] = { "C:\\Program Files\\" };
	strcat_s(szPath, sizeof(szPath), "MintRisha\\");
	strcat_s(szPath, sizeof(szPath), "C Programming");
	puts(szPath);
	
	
	strcpy_s(szPath, sizeof(szPath), "C:\\Program Files\\");
	strcat_s(szPath + 17, sizeof(szPath) - 17, "MintRisha\\");
	strcat_s(szPath + 17 + 8, sizeof(szPath) - 25, "C Programming");

	puts(szPath);

	return 0;
}
