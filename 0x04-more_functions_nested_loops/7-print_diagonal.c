#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: numbers of '\' to be printed
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\');

	for (x = 0; x < n; x++)
	{
		for ( y = 0; y < x; x++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}

