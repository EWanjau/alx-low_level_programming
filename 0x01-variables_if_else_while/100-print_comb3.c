#include "stdio.h"

/**
 * main - prints the numbers 
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, x;

	for (n = 48; n <= 57; n++)
	{
		for (x = 48; x <= 57; x++)
		{
			putchar(n);
			putchar(x);
			if (n != 57 || x != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
