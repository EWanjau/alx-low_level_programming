#include "main.h"

/**
 * *_strcpy - copies the string from a source to destination
 * @ptr; destination string
 * @s1: the source string to be copied
 * Return: the pointer to the dstination
 */
char *_strcpy(char *dest, char *src)
{
	int i, k;

	for (i =0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	for (k = 0; dest[i] != '\0'; k++)
		_putchar(dest[k]);

	_putchar('\n');
}
