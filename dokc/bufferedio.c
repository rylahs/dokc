#include <stdio.h>

typedef struct IOBUF_TEST
{
	char* pCur;
	char* pBase;
	int		bufSize;
} IOBUF_TEST;

void print_iobuf(IOBUF_TEST* pBuf)
{
	printf("Base: %p\n", pBuf->pBase);
	printf("Current: %p\n", pBuf->pCur);
	printf("Buffer Size: %d\n", pBuf->bufSize);
	printf("Written Size: %zd\n",pBuf->pCur - pBuf->pBase);
}

int main(void)
{
	FILE* fp = NULL;

	//fopen_s(&fp, "CON", "r"); // stdin
	fopen_s(&fp, "CON", "w"); // stdout

	IOBUF_TEST* pIoBuf = (IOBUF_TEST*)fp;


	print_iobuf((IOBUF_TEST*)fp);
	printf("\n");

	fputs("Hello", fp);
	print_iobuf((IOBUF_TEST*)fp);
	printf("\n");

	fputs("World", fp);
	print_iobuf((IOBUF_TEST*)fp);
	printf("\n");

	fclose(fp);

	return 0;
}