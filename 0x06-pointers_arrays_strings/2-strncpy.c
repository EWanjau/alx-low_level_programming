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
	if (*dest == NULL)
		return (NULL);
	
	char *ptr = dest;
	
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);
}
