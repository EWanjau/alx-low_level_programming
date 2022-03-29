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

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept[j])
			count++;
	}
	return (count);
}
