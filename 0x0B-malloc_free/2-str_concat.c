#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: 1st str
 * @s2: 2nd str
 * Return: pointer to the new concatenated str
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0, i = 0, j = 0;
	char *arr;

	while (s1 && s1[size1])
		size1++;

	while (s2 && s2[size2])
		size2++;

	arr = malloc(sizeof(char) * (size1 + size2 + 1));

	if (arr == NULL)
		return (NULL);

	if (s1)
	{
		while (i < size1)
		{
			arr[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (size1 + size2))
		{
			arr[i] = s2[j];
			i++;
			j++;
		}
	}
	arr[i] = '\0';

	return (arr);
}
