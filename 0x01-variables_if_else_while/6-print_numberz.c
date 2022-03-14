#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int num;
	num = 0;
	while(num >= 0 && num < 10)
		putchar(num);
	return(0);
}
