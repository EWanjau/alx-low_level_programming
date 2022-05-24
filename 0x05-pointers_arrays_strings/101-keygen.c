#include "stdio.h"
#include "stdlib.h"
#include "time.h"

/**
 * main - returns a random number
 *Return: 0 always success
 */
int main (void)
{
	int word[100];
	int i, sum, num;

	sum = 0;
	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		word[i] = rand() % 78;
		sum+= (word[i] + '0');
		putchar(word[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			num = 2772 - sum - '0';
			sum += num;
			putchar(num + '0');
			break;
		}
	}
	return (0);
}
