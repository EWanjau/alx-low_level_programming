#include "main.h"
#include "stdio.h"

/**
 * main - prints the number of arguments
 * Return: tota arguments
 */
int main(int argc, char* argv[])
{
	int i = 0; 

	while (i < argc)
	{
		printf("Name arguments: %s\n", argc, argv[i]);
		i++;
	}

	return (0);
}
