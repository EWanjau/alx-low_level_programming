#include "main.h"
int prime(int n, int j);
/**
 * is_prime_number - checks for the prime number
 * @n: input
 * Return: 1 for prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return(0);
	else if (prime(n, n / 2) > 0)
		return(1);
	return(0);
}
/**
 * prime - checks for the conditions of prime number
 * @n: input
 * @j: n / 2, checks if no is greater than 0
 * Return: prime checker
 */
int prime(int n, int j)
{
	if (j == 1)
		return(1);
	if (n % j == 0)
		return(0);
	else
		return (prime(n, j - 1));
}
