#include "main.h"

/**
 * _puts - prints like stdout
 * @str ; input string
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
		_putchar(str[i]);

	_putchar('\n');
}
