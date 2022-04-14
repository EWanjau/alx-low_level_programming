#include "stdio.h"
#include "stdlib.h"
#include "function_pointers.h"

/**
 * print_name - function pointer to print
 * @name: input
 * @f: input function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	/*if (name == NULL || f == NULL)
		return;*/
	f(name);
}
