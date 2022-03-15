#include "main.h"

/**
 * print_sign - checks for the sign
 *@n:single value
 * Return: 1 for +, 0 f0r 0 and -1 for -1
 */

int print_sign (int n)
{
	char '+', '0', '-';

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n = 0)
	{     
	       	_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}


}
