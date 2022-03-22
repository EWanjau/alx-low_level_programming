#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: input string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i, j, len;

	for (j = 0; s[j] != '\0'; j++)

	len = j;

	for(i = len; s[i] >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
