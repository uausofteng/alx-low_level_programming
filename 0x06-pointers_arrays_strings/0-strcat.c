#include "main.h"

/**
 * _strcat - concatenates the sring pointed
 * @dest: pointer to string to be concatenated
 * @src: the source string to appended to @dest
 * Return: a pointer to tje destination @dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, len_dest = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
