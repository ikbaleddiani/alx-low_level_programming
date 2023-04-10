#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
	int n, j;

	n = 0;

	while (n < 8)

	{

		j = 0;

		while (j < 8)

		{
			_putchar (a[n][j]);

			j++;

		}

		_putchar ('\n');
		n++;
	}
}
