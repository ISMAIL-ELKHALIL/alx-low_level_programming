#include "main.h"
/**
  * print_triangle - Fonction that draws a triangle shape,
  * in the terminal ,using #
  * @n: number of lines to be drawed
  */
void print_triangle(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = n - i; j > 0; j--)
				_putchar(' ');

			for (j = 0; j < i; j++)
				_putchar('#');

			if (i == n)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
