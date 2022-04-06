#include "main.h"
#include "stdio.h"

/**
 * main - prints the name of a program
 * @argc:count of commands
 * @argv: the carguments
 * Return: name
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
