#include "main.h"
#include "stdio.h"

/**
 * whatsmyname - prints the name of a program
 * Reurn: name
 */
int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		_putchar(argv[i]);
	_putchar('\n');
	return (0);
}
