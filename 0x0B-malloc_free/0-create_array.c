#include "main.h"
#include "stdlib.h"
#include "stdio.h"
/**
 *create_array - initiatiizes an array
 *@size: the size of array
 *@c:the value of array
 *Return: the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (size == 0 && arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);


}
