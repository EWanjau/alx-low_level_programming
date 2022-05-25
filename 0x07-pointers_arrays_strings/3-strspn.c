#include "main.h"

/**
 * _strspn - counts the times a character appears from another string
 * @s:source string
 * @accept:the checker
 * Return: count of the times the same characters match
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i, j, f;

	for (i = 0; s[i] != '\0'; i++)
	{
		f = 0;
		for (j = 0; accept[j] != '0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				f = 1;
			}
		}
		if (f == 0)
		{
			return (count);
		}
	}
	return (0);
}
