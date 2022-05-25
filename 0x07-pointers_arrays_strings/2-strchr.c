#include "main.h"
#include "stdio.h"
/**
 * _strchr - checks the position of a character and returnsthe string
 * @s: the pointer ot the string
 * @c: the character whose index we look for
 * Return: s or null if the character is missing
 */
char *_strchr(char *s, char c)
{
	int i;

	while (*s != '\0')
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
			return (NULL);
	}
	return (s);
}
