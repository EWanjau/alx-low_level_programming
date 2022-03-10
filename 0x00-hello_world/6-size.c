#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{       
	 
	int intSize;
	char charSize;
	long int longintSize;
	long long int llongintSize;
	float floatSize;
	
	printf("Size of a char: %zu byte(s)\n", sizeof(charSize));
	printf("Size of an int: %zu byte(s)\n", sizeof(intSize));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintSize));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llongintSize));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatSize));
	return (0);
}
