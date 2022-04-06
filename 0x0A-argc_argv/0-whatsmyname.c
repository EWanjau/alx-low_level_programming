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
		printf("%s\n",argv[0]);
	return (0);
}
