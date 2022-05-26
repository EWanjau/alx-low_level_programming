#include "main.h"

/**
 *create_array - initiatiizes an array
 *@size: the size of array
 *@c:the value of array
 *Return: the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = (char *) malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';

	return (arr);
}
