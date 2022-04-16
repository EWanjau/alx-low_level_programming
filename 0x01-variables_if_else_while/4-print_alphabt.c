#include "stdio.h"
#include "stdlib.h"

/**
*main - Entry Point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
