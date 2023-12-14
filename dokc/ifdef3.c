#include <stdio.h>

#define MYUNICODE
#ifdef MYUNICODE
	typedef wchar_t TCHAR;
	#define _T(string) L##string
	#define PRINT wprintf
#else
	typedef char TCHAR;
	#define _T(string) string
	#define PRINT printf
#endif // MYUNICODE


int main(void)
{
	TCHAR szData[16] = _T("Test String");
	PRINT(_T("%s\n"), szData);
	PRINT(_T("%zd, %zd\n"), sizeof(TCHAR), sizeof(szData));
	return 0;
}
