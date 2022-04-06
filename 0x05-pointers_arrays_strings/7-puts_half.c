#include "main.h"

/**
 * puts_half - prints the last half of a string input
 * @str: string input
 * Return: Always 0
 */
void puts_half(char *str)
{
	int k, l;

	k = 0;

	while (str[k] != '\0')
	{
		k++;
	}
	if (k % 2 == 0)
	{
		for (l = (k / 2); l <= k; l++)
			_putchar(str[l]);
	}
	else 
	{
		for (l = ((k - 1) / 2); l <= k; l++)
			_putchar(str[l]);
	}
	_putchar('\n');
}
