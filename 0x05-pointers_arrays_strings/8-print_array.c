#include "main.h"
#include "stdio.h"

/**
 * print_array - prints an array using a pointer to the array
 * @a: value of the array
 * @n: number of elements in the array
 * Return: a list of the array
 */
void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < n; ++p)
		printf("%d, ", *a++);
}
