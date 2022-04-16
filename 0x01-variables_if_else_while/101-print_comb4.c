#include "stdio.h"

/**
 * main - prints possible combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, x, p;

	for (n = 48; n < 58; n++)
	{
		for (x = 49; x < 58; x++)
		{
			for (p = 50; p < 58; p++)
			{
				if (p > x && x > n)
				{
					putchar(n);
					putchar(x);
					putchar(p);
					if (n != 55 || x != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
