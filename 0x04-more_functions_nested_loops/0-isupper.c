#include "main.h"

/**
*_isupper - check if a character is or not
*@c: character to be tested
*Return: 1 whether it is, 0 otherwise
*/

int_isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
return (0);
}
