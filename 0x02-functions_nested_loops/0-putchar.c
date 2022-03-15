#include "main.h"

/**
 * main - Print a string
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[10] = "_putchar ";
	int i = 0;

	while (str[i] != '\0')
	{
		putchar (str[i]);
		i++;
	}
	return (0);
}
