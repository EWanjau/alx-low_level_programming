#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments passed
 * @n: all integers parsed to the function as inputs
 * Return: returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	va_start(ap, int);

	sum = 0;
	for (i = 0; i < n; i++)
		sum = sum + va_arg(ap, int);
	va_end(ap);
	return (sum);
}
