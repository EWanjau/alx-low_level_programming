#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers parsed
 * @separator: character spacing the numbers
 * @n: number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
