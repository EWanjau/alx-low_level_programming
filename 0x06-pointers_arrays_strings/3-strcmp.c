#include "main.h"

/**
 * _strcmp - compares two srting inputs
 * @s1: input string
 * @s2: secod string
 * Return: less than zero if s1 is lesser, zero if they compare and more
 * than zero if s1 is greater.
 */
char *_strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (char*)(*(unsigned char*)s1 - *(unsigned char*)s2);
}
