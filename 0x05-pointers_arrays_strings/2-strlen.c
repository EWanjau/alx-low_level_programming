#include "main.h"

/**
 * _strlen - gives the strings length
 * @s: string input
 * Return: the length on a string
 */
int _strlen(char *s)
{
	int i;
	
	i = 0;
	
	while (s[i] != '\0')
		i++;
	return (i);
}
