#include "main.h"

/**
 * _strcpy - copies the string from a source to destination
 * @dest: destination string
 * @src: source string
 * Return: the pointer to the dstination
 */
char *_strcpy(char *dest, char *src)
{
	int i, k;
	k = 0;
	
	while (src[k] != '\0')
	{
		k++;
	}
	for (i = 0; i < k; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
