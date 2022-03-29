#include "main.h"

/**
 *_memset - sets the 2D array with a specific value
 *@s: pointer to the buffer size
 *@b: is the replacement byte
 *@n: the number of times the charater wil be copied
 *Return: the pointer to the destination
 */

char *_memset(char *s, char b, unsigned int n)
{
	int mat[n][*s];
	int value = b;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < *s; j++)
			mat[i][j] = value;
	}
	
	_putchar('\0');
	
	return (s);
}
