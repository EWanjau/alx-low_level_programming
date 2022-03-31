#include "main.h"

/**
 * _strchr - checks the position of a character and returnsthe string
 * @s: the pointer ot the string
 * @c: the character whose index we look for
 * Return: s or null if the character is missing
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		*s++;
	}
	return (NULL);
}
