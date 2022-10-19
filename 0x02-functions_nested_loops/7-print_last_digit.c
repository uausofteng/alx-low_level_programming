#include "main.h"

/**
 * Print_last_digit - main function print last_digit
 * Description: Main function of the program to print last_digit_digi
 * @n: The number
 * Return: value of the last digit
 */
last_digit_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
