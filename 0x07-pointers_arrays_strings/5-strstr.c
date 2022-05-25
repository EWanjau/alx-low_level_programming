#include "main.h"
#include "stdio.h"
/**
 * _strstr - finds the substring in a string
 * @haystack: the destination string
 * @needle: substring
 * Return: pointer to the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
