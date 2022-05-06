#include "main.h"

/**
 *clear_bit - set 0 on agiven index
 *@n: the number input
 *@index: the position to change
 *Return: 1 success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
