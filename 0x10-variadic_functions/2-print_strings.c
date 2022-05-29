#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: comma
 * @n: no of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *s;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char *);
		if (s == NULL)
			s = "(nil)";
		if (!separator)
			printf("%s", s);
		else if (separator && i == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}
	va_end(arg);

	printf("\n");

}
