#include <stdio.h>

int Add(int a, int b)
{
	int c = 0;
	c = a + b;
	return c;
}

int main(int argc, char* argv[])
{
	int data = 0;
	data = Add(3, 4);
	return 0;
}