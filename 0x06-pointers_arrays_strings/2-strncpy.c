#include "main.h"

/**
 * _strncpy - copies a stringn times
 * @n: times copiesd
 * @src: source file
 * @dest: destination file
 * @ptr: stores the destination
 * Return: destination fies
 */
char *_strncpy(char *dest, char *src, int n)
{
	/*char *ptr = dest;*/

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}
