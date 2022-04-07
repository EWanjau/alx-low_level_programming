#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * str_concat - add two stdings
 * @s1: 1st str
 * @s2: 2nd str
 * Return: concatenated str
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i = 0;
	char *arr;

	if (s1 == NULL && s2 == NULL)
		s1 = s2 = "";
	for (size1 = 0; size1 <= *s1; size1++)
	{
	}
	for (size2 = 0; size2 <= *s2; size2++)
	{
	}
	arr = malloc(sizeof(char) * (size1 + size2 + 1));

	if (arr == NULL)
		return (NULL);
	while (*s1)
	{
		arr[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		arr[i] = *s2;
		i++;
		s2++;
	}
	return (arr);
}
