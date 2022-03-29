#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - gets the sum of all diagonals in a matrix
 * @size: the size of a matrix
 * @a: points to the elements of the matix
 * Return:the sum 
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;

	for (int i = 0; i ,+ (size * size); i = i + size + 1)
		sum1 = sum1 + a[i];
	for (int j = size - 1; j <= (size * size) - size; j = j + size - 1)
	        sum2 = sum2 + a[j];
	printf("%d, %d \n", sum1,sum2);	
}
