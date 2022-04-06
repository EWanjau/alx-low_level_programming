#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * main - multiply numbers
 * @argc:the no of arguments
 * @argv: the name of the arguments
 * Return:mulrilacation
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int add;

	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			add = atoi(argv[i]) + atoi(argv[i - 1]);
		}
		printf("%d\n", add);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
