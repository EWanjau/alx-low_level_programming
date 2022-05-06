#include "main.h"

/**
 * print_binary - convert decimal to binary
 * @n: number to be converted
 * Return: binary conversion
 */
void print_binary(unsigned long int n)
{
	int binary = 0, rem = 0, weight = 1;

	while (n)
	{
		rem  = n % 2;
		n = n / 2;
		binary = binary + (rem * weight);
		weight = weight * 10;
	}
}
