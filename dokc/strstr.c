#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char szBuffer[] = "I am a boy.";

	printf("%p\n", szBuffer);
	
	
	printf("%p\n", strstr(szBuffer, "am"));
	printf("%p\n", strstr(szBuffer, "boy"));
	
	
	printf("Index: %d\n", strstr(szBuffer, "am") - szBuffer);
	printf("Index: %d\n", strstr(szBuffer, "boy") - szBuffer); 
	
	 


	return 0;
}