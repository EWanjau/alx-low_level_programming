#include "main.h"

/**
 *_isalpha - checks alphanumeric keys
 *@c: sinle letter
 * Return: returns 1 if c is lower or upper case
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' | c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}

