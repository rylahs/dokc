#include <stdio.h>

int main(void)
{
	int x = 5, y = 10;
	
	// true 0�� �ƴ� (+, -)
	// false : 0

	printf("%d\n", x == y); 
	printf("%d\n", x != y); 
	printf("%d\n", x > 5); 
	printf("%d\n", y < 5); 
	printf("%d\n", y >= 10); 

	printf("%d\n", y <= x + 5);

	return 0;
}