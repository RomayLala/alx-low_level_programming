#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: 2D array of characters representing the chessboard
 *
 * Each row of the array represents a row on the chessboard.
 * Each column represents a column on the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
