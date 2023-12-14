#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main(void)
{
    setlocale(LC_ALL, "Korean");

    FILE* fp = NULL;
    wchar_t ch;

    _wfopen_s(&fp, L"ttest.txt", L"r, ccs=UTF-8");
    if (fp == NULL)
        return -1;

    while ((ch = fgetwc(fp)) != WEOF)
        putwchar(ch);

    fclose(fp);

    return 0;
}