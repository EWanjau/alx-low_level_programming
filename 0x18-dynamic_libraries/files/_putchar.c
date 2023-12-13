#include "unistd.h"

/**
 * _putchar - dispays character to stdout
 * @c: the character to output
 * Return: 1 on success
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
