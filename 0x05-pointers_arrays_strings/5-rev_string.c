#include "main.h"

/**
 * rev_string - reverses a string once printed
 * @s: input string
 * Return:Always 0
 */

void rev_string(char *s)
{
	int j;

	for (j = 10; j >=0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
