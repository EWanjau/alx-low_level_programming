#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
        int n,last_digit;
    
        srand(time(0));
        n = rand()-RAND_MAX/2;
        last_digit = n%10;
        if(n > 5)
                printf("Last digit of %d is %d and is greater than 5", n,last_digit);

        return (0);
}
