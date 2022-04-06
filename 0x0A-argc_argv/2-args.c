#include "main.h"
#include "stdio.h"

/**
 * main - prints the number of arguments
 * @argc:number of arguymnets
 * @argv:the name of arguments
 * Return: tota arguments
 */
int main(int argc, char *argv[]
{
	int i = 0; 

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
