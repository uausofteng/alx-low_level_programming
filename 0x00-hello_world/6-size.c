#include <stdio.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints "Programming is like building a multilingual puzzle
* Return:0
*/
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;

	printf("Size of a char: %1d byte(s)\n", sizeof(a));
	printf("Size of an int: %1d byte(s)\n", sizeof(b));
	printf("Size of a long int: %1d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %1d byte(s)\n", sizeof(d));
	printf("size of a float: %1d byte(s)\n", sizeof(e));
	return (0);
}
