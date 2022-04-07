#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * main - multiply numbers
 * @argc:the no of arguments
 * @argv: the name of the arguments
 * Return:multiplacation
 */
int add(int argc,char *argv[])
{
    int i;
    int digits[100];
    int sum = 0;

    for (i = 0; i < argc; i++)
    {
        digits[i]= atoi(argv[i]);
        if ((digits[i] >= 0) && (digits[i] <= 9))
        {
            sum+=digits[i];
            printf("&%d \n", sum);
        }
        else
        {
            printf("Error\n");
        }

        return (0);
    }
}

int main(int argc, char *argv[])
{
    int i;
    int sum = 0;

    if (argc == 1)
    {
        printf("0\n");
    }
    else
    {
        sum = add(argc,argv);
    }

    return (0);
}
