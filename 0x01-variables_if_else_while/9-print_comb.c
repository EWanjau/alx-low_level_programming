#include "stdio.h"
#include "stdlib.h"

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(',');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
