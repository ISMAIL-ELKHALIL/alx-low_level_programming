#include "main.h"
/**
  * print_square - Fonction that draws a square followed by
  * new line in the terminal
  * @n: number of lines to be drawed
  */

void print_square(int n)
{
	int j, i;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < n; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	}
