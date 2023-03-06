#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: chessboard
 *
 */

void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; a[row][7]; row++)
	{
		for (column = 0; column < 8; column++)
			_putchar(a[row][column]);

		_putchar('\n');
	}
}


