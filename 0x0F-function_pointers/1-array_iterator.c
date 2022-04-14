#include "stdio.h"
#include "function_pointers.h"
#include "stdlib.h"

/**
 * array_iterator - call a function to work on array elemnets
 * @size: lenght of array
 * @action: function pointer
 * @array: values in array to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
