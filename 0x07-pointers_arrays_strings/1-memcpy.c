#include "main.h"

/**
 *_memcpy - copies from source to destination n times
 *@dest: destination of copy operation
 *@src: pointer to the source data
 *@n: the number of bytes to copyt
 *Return: the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
