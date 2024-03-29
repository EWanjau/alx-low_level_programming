#include "main.h"

/**
 * factorial - gets the factorial of a number
 * @n:the input
 * Return:factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
