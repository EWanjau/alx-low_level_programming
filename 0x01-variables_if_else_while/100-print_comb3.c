#include "stdio.h"

/**
 * main - prints the numbers from 0 to 99
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, x;

	for (n = 48; n < 58; n++)
	{
		for (x = 49; x < 58; x++)
		{
			if (x > n)
			{
				putchar(n);
				putchar(x);
				if (n != 57 || x != 58)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
