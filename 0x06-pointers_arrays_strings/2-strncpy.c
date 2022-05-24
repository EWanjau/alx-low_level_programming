#include "main.h"

/**
 * _strncpy - copies a stringn times
 * @n: bytes to be copied
 * @src: source file
 * @dest: destination file
 * @ptr: stores the destination
 * Return: pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
