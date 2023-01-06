#include "search_algos.h"

/**
 *binary_search - searches a avalue froma sorted array
 *@array: list to select a value
 *@size: size of the array
 *@value: values to search from the array
 *Return: index of the value found
 */
int binary_search(int *array, size_t size, int value)
{
	int mid = -1;
	size_t low = 0, high = size - 1, i;

	if (!array)
		return (-1);
	while (low < high)
	{
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i != high)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
	}
	return (-1);
}
