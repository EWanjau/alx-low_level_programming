#include "main.h"

/**
 *array_range - creates array of integers
 *@min: minimum value in array
 *@max: maximum vaue in array
 *Return: pointer to new array created
 */
int *array_range(int min, int max)
{
	int i, len;
	int *ptr;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}

