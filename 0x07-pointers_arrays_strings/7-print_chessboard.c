#include "main.h"
/**
  * print_chessboard - Function that prints the chessboard
  * @a: 2D array ,to represent the chessboard.
  */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
			/* Print the character at the current position */
		}
		_putchar('\n');
		/* Move to the next line after printing each row */
	}
}
