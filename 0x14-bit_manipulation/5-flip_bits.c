#include "main.h"

/**
 * flip_bits - gets the no of bits needed to change a number to another
 *@n: 1st number
 *@m: 2nd number
 *Return: the bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, no = 0;
	unsigned long int curr;
	unsigned long int flip;

	flip = n ^ m;
	for (i = 63; i >= 0; i--)
	{
		curr = flip >> i;
		if (curr & 1)
			no++;
	}
	return (no);
}
