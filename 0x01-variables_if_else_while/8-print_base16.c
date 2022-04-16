#include "stdio.h"
#include "stdlib.h"

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char num;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (num = 'a'; num <= 'f'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
