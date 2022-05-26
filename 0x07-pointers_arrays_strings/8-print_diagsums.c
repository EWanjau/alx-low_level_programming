#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - gets the sum of all diagonals in a matrix
 * @size: the size of a matrix
 * @a: points to the elements of the matix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d \n", sum1, sum2);
}
