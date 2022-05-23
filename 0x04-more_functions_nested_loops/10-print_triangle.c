#include "main.h"
#include "stdio.h"

/**
 * print_triangle - prints triangle n times
 * @size: the number of times to print characters
 * Return: void 
 */
void print_triangle(int size)
{
	int i;
	
	if (size > 0)
	{
		for (i = size; i >= 0; i--)
		{
			_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
