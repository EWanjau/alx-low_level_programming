#include "main.h"

/**
 * swap_int - swaps the vaalues of two integers
 * @a: input one
 * @b: input two
 * Return: values of swapped integers
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
