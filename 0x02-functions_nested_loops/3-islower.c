#include "main.h"

/**
 * _islower - Program that checks the input for lowercase
 * c: single letter
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
