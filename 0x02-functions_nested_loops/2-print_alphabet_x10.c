#include "main.h"

/** 
 * print_alphabet - program prints the alphabet 10 times
 *
 * Return: Always 0 (Success) 
 */

void print_alphabet_10(void)
{
	int i,j;
	i = 0;

	while (i <= 10)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);

		_putchar('\n');
	i++;
	}
	return (0);
}

