#include "main.h"
#include "stdio.h"
/**
 * _strpbrk - copies a string that natches another
 * @s: destination string
 * @accept: source string
 * Return: the destination
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return (NULL);
}
