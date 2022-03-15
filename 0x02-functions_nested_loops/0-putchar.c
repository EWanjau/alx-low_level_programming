#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main()
{
	char str[10]="_putchar";
	int i =0;
	while(str[i]!='\0')
	{
		putchar(str[i]);
		i++;
	}
	return (0);
}
