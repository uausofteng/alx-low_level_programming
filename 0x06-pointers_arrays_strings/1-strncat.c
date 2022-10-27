#include "main.h"

/**
* _strncat - _stcncat concatenates two strings using at most number of byte
* @dest: the string to apendend upon
* @src: the string to appended dest
* @n: the number of bytes from src appended to dest
*
* Return: A pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
