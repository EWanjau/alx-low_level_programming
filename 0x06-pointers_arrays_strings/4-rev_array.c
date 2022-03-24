#include "main.h"

/**
 * reverse_array - reverses the order of array elements
 * @a: the rray elements
 * @n: the max elemnt
 * Return: the reverse array
 */
void reverse_array(int *a, int n)
{
	int temp[n];

	for (int i = 0; i < n; i++ )
	{
		temp[n - 1 - i] = a[i];
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = temp[i];
		_putchar(a[i]);
	}
	_putchar('\0');
}
