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
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
