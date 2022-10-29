#include "main.h"

/**
 * rot13 - emcodes a string using rot13
 * @str: the string to be encoded
 *
 * Return: A pointer to be encoded string
 */
char *rot13(char *str)
{
	int index = 0, index2;
	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',						
