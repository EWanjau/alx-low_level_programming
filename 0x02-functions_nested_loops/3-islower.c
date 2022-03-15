#include <main.h>

/** 
 * main - Program that checks the input for lowercase
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if ( c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
