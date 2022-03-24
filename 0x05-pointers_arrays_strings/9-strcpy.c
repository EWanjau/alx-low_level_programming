#include "main.h"

/**
 * _strcpy - copies the string from a source to destination
 * @ptr: destination string
 * @src: source string
 * @s1: the source string to be copied
 * Return: the pointer to the dstination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; ++i)
		dest[i] = src[i];
	
	dest[i] = '\0';
	
	_putchar('\n');
	
	return (dest);
}
