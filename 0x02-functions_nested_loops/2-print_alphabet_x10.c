#include "main.h"

/**
 * prints_alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_10x(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
	return (0);
}
