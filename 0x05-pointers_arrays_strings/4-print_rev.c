#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: input string
 * Return: void
 */
void print_rev(char *s)
{
	int i, j, len;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	len = j;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
