#include <stdio.h>

/** 
 * main - This function prints alphabet letters
 *
 * Return: Always 0(Success)
 */

void print_alphabet(void);

int main (void)
{
	print_alphabet();	
	return (0);
}

void print_alphabet(void)
{
	int i;

 	for (i = 'a';i <= 'z';i++)
	       	putchar(i);
}