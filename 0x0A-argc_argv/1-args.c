#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * main - prints the number of arguments
 * @argc: argument counter
 * @argv: argument vector(name)
 * Return: tota arguments
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
