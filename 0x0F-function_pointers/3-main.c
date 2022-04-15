#include "3-calc.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * main - all code runs here
 * @argc: argument counter
 * @argv: argument name/list
 * Return: void
 */
void main(int argc, char *argv[])
{
	char op;
	int num1, num2, result;
	int (*func)(int, int);

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
	
	op = *argv[2];
	
	if ((op == '/' || op == '%') && (argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	
	func = get_op_func(argv[2]); 
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	
	result = func(num1, num2);
	printf("%d\n", result);
}
