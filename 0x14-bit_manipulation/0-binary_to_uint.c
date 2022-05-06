#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: input string
 * Return: decimal equivalent
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int rem = 0;
	unsigned int weight = 1;
	unsigned int dec = 0;
	int ptr = 0;

	while (*b != '\0')
	{
		rem = atoi(b) % 10;
		dec = dec + rem*weight;
		ptr = b;
		b = atoi(b) / 10;
		weight = weight*2;
	}
	return (dec);

}
