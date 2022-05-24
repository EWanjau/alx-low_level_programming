#include "main.h"

/**
 * reverse_array - reverses the order of array elements
 * @a: the array elements
 * @n: the max elemnt
 * Return: the reverse array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
