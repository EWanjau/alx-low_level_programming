#include "main.h"

/**
 * print_last_digit - gets the last digit of am integer
 *@r:is the single integer
 * Return: the value of the last digit
 */
int print_last_digit(int r)
{
	int last;
	
	last = r % 10;
	if (last < 0)
		last = (-1 * last);
	
	_putchar(last + '0');
	return (last);
}
