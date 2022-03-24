#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string
 * Return: encoded string
 */
char *leet(char *s)
{
	int index, k;
	int str[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int encode[] = {'4', '3', '0', '7', '1'};

	for (index = 0; s[index] != '\0'; index++)
	{
		for (k = 0; x <= 9; x++)
		{
			if (s[index] == str[x])
			{
				s[index] = encode[x / 2];
				x = 9;
			}
		}
	}

	return (s);
}
