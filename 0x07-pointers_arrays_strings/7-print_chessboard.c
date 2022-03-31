#include "main.h"

/**
 * print_chessboard - orints the layout of a chessboard
 * @a:the rows of the matrix
 * @8: the number of columns
 * Return: the matrix
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	
	for (i = 0; i < *a[i]; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
