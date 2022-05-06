#include "main.h"

/**
 * print_binary - convert decimal to binary
 * @n: number to be converted
 * Return: binary conversion
 */
void print_binary(unsigned long int n)
{
	int i = 0, cout = 0;

	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;

		if (curr & 1)
		{
			_putchar('1');
			cout++;
		}
		else if (cout)
			_putchar('0');
	}
	if (!cout)
		_putchar('0');
}
