#include "stdio.h"
#include "stdlib.h"
#include "limits.h"
/**
 *malloc_checked - allocates memory space
 *@b: input
 *Return: size
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == NULL)
		return (98);
	return (ptr);
}
