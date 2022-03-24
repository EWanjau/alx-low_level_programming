#include "main.h"

/**
 * _strcat- concatenates two strings
 * @src: source string
 * @dest: destination string
 */
char *_strcat(char *dest, char *src)
{
	int k, len;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (k = 0; k < len; k++)
	{
		src[len] = dest[k];
	}
	return(dest);
}
