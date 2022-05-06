#include "main.h"

/**
 * get_endianness - checks if a mchine is big or small endian
 *Return: void
 */
int get_endianness(void)
{
	unsigned int i = 1;

	char *c = (char *) &i;

	return (*c);
}
