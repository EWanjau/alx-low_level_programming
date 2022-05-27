#include "main.h"

/**
 *malloc_checked - allocates memory space
 *@b: size of bytes to alocate
 *Return: a pointer to the aloocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
