#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry Point
*
*Return: Always 0 (Success)
*/
int main(void){
	char ch;
	for(ch='a';ch<'e'&&ch > 'e' && ch < 'q' && ch > 'q'; ch++)
		putchar(ch);
	return(0);
}
