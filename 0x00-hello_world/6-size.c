#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{       
	//set the variables of the data types 
	int intSize;
	char charSize;
	long int longintSize;
	long long int llongintSize;
	float floatSize;
	//print their sizes
	printf("Size of a char:%ku",sizeof(charSize));
	printf("Size of an int:%ku,",sizeof(intSize));
	printf("Size of a long int:%ku",sizeof(longintSize));
	printf("Size of a long long int:%ku",sizeof(llongintSize));
	printf("Size of a float:%ku",sizeof(floatSize));
	return (0);
}
