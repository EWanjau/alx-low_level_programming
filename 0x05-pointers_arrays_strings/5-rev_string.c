#include "main.h"

/**
 * rev_string - reverses a string once printed
 * @s: input string
 * Return:Always 0
 */
void rev_string(char *s)
{
	char tmp;
	int i, j, len;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	len = j - 1;

	for (i = 0; i < (j / 2); i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len--] = tmp;
	}
}
