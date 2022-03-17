#include "stdio.h"

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int sum_3, sum_5, sum;
	int a;

	sum_3 = 0;
	sum_5 = 0;
	sum = 0;

	for (a = 0; a < 1024; ++a)
	{
		if ((a % 3) == 0)
		{
			sum_3 = sum_3 + a;
		} else if ((a % 5) == 0)
		{
			sum_5 = sum_5 + a;
		}
	}
	sum = sum_3 + sum_5;
	printf("%lu\n", sum);
	return (0);
}
