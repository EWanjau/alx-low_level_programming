#include "main.h"

/**
 * _strncat- copies strings with a maximum of n
 * @n:size of source array
 * @src: input string
 * @dest: destination file
 * Return: the destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	k = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[k + i] = src[i];
	}
	dest[k + i] = '\0';

	return (dest);
}
