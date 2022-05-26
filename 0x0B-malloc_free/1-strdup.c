#include "main.h"
#include "stdlib.h"

/**
 * _strdup - checks for duplicate a string
 * @str: the input
 * Return: pointer to the duplicate str
 */
char *_strdup(char *str)
{
	int i, size;
	char *arr;

	i = 0;
	size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	arr = malloc(sizeof(char) * (size + 1));

	if (arr == NULL)
		return (NULL);

	while ((arr[i] = str[i]) != '\0')
		i++;

	return (arr);
}
