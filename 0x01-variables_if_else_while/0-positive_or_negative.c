#include <stdlib.h>
#include<time.h>
#include <stdio.h>

/**
* main – entry point
* Description: prints if a number is positive or negative
Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() \342; – RAND_MAX / 2;
	if (n > 0)
	{
		printf(“%d is positive\n”, n);
	}
	else if ( n == 0)
	{
		printf(“%d is zero\n”, n);
	}
	else if (n < 0)
	{
		Printf(“%d is negative\n”, n);
	}
	return (0);
}

