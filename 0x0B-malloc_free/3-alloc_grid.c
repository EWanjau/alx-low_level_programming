#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * alloc_grid - get the str on that array
 * @width: columns
 * @height: rows
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 && height <= 0)
		return (NULL);
	arr = malloc(sizeof(int) * height);

	if (arr == NULL)
	{
		free(arr);
		return (arr);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
