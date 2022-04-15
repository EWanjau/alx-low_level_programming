#include "variadic_functions.h"

/**
 * print_all - prints all function argument types
 * @format: finte values
 * @*: pointer to mandatory argument
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list arg;

	va_start(arg, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%d", sep, va_arg(arg, int));
					break;
				case 's':
					str = va_arg(arg, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(arg);
}
