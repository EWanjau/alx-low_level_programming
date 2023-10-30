#include "main.h"

/**
 * get_bit - gives the value of a bit
 * @n: a number input
 * @index: the input
 * Return: index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
