#include <stdlib.h>
#include<time.h>
#include <stdio.h>

/**
 * main – Prints if number is positive, zero or negative
 *
 * Return:Always(Success)
 */
Int main(void)
{
	Int n;
	Srand(time(0));
	N = rand() – RAND_MAX/2;

	If (n>0)
	{
		Printf(“%d is positive\n”, n);
	}
	else if (n==0)
	{
		Printf(“%d is zero\n”, n);
	}
	else
	{
		Printf(“%d is negative\n”, n);
	}
	Return (0);
}

