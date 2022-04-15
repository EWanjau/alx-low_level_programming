#include "3-calc.h"
#include "stdio.h"

/**
 * main - all code runs here
 * @argc: argument counter
 * @argv: argument name/list
 * Return: void
 */
void main(int argc, char *argv[])
{
	char *operator;
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != ('+' || '-' || '*' || '/' || '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' || *operator == '%') && (argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	printf("%d\n", get_op_func(operator));
}
