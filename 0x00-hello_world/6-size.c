#include <stdio.h>

/**
* main - prints the sizeof many var types
*
* Return: Always 0 (Succcess)
*/
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;

	printf("Size of a char: %1d byte(s)\n", sizeof(a));
	printf("Size of an int: %4d byte(s)\n", sizeof(b));
	printf("Size of a long int: %4d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %8d byte(s)\n", sizeof(d));
	printf("size of a float: %4d byte(s)\n", sizeof(e));
	return (0);
}
