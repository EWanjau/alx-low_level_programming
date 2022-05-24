#include "main.h"

/**
 * _strcat- concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	int k, len;

	len = 0;
	k = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[k] != '\0')
	{
		dest[len] = src[k];
		k++;
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
