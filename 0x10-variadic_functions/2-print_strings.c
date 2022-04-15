#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: comma
 * @n: no of arguments
 * Return: void
 */
vod print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *s;

	va_start(arg, n);
	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i != (n - 1))
			printf("%s", separator);
	}
	va_end(arg);

	printf("\n");

}
