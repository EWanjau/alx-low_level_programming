#include "main.h"

/**
 * string_toupper - changes the lower caps to uppercaps
 * @str: input string
 * Return: the string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] =str[i] - 32;
			_putchar(str[i]);
		}
		i++
	}
	_putchar('\0');
}