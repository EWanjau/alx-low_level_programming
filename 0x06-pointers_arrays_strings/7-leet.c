#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, k;
	int str[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int encode[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (s[i] == str[k])
			{
				s[i] = encode[k / 2];
				k = 9;
			}
		}
	}

	return (s);
}
