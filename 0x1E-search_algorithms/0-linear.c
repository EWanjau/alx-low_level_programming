#include "search_algos.h"

/**
 * linear_search - function that searches the value in an array
 *@array: - pointer to the fisrt element
 *@size: - number of elements in an array
 *@value: - value to search from
 *Return: value searched
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int value_found = -1;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			value_found = i;
			break;
		}
	}
	return (value_found);
}
