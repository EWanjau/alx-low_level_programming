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
	int i;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if ((argv[] >= 0) && (argv[] <= 9))
	{
		for (i = 1; i < argc; i++)
		{
			add = atoi(argv[i]) + add;
		}
		printf("%d\n", add);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
