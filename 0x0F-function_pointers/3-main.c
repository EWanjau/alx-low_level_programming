#include "3-calc.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * main - all code runs here
 * @argc: argument counter
 * @argv: argument name/list
 * Return: void
 */
int main(int argc, char *argv[])
{
	char op;
	int num1, num2, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((op == '/' || op == '%') && (num2 == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
