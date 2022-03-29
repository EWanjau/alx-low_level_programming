#include "main.h"

/**
 * _strpbrk - copies a string that natches another
 * @s: destination string
 * @accept: source string
 * Return: the destination
 */
char *_strpbrk(char *s, char *accept)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		for (int j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s);
			s++;
		}
		return (NULL);
	}
}
