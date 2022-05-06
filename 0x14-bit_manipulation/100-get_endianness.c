#include "main.h"

/**
 * get_endianness - checks if a mchine is big or small endian
 *Return: 1 for little and 0 for big
 */
int get_endianness(void)
{
	unsigned int i = 1;

	char *c = (char *) &i;

	return (*c);
}
