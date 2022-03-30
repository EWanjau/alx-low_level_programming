#include "main.h"

/**
 * factorial - gets the factorial of a number
 * @n:the input
 * Return:factorial
 */
int factorial(int n)
{
	if (n <= 1)
	{
		return(1);
	}
	else
	{
		return(n * factorial(n - 1));
	}
}
