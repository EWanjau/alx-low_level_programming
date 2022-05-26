#include "main.h"
/**
 * _sqrt_recursion - condion chekcer
 * @n: input
 * Return:squareroot or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squarert(n, (n + 1) / 2));
}
/**
 * squarert - checks for natural numbers
 * @n: input
 * @j: counter
 * Return: squareroot or -1
 */
int squarert(int n, int j)
{
	if (j < 1)
		return (-1);
	else if (j * j == n)
		return (j);
	else
		return (squarert(n, j - 1));
}
