#include "main.h"

/**
 * _strncpy - copies a stringn times
 * @n: times copiesd
 * @src: source file
 * @dest: destination file
 * Return: destination fies
 */
char *_strncpy(char *dest, char *src, int n)
{
	while (*src ** n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}
