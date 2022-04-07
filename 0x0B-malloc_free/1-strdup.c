#include "main.h"
#include "stdlib.h"

/**
 * _strdup - duplicates a striing
 * @str: the inut
 * Return: array
 */
char *_strdup(char *str)
{
	int i, size;
	char *arr;

	if (str == NULL)
		return (NULL);
	for (i = 0; i <= *str; i++)
		size = size + 1;
	arr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		arr[i] = str[i];
	if (arr == NULL)
		return (NULL);
	return (arr);

}
