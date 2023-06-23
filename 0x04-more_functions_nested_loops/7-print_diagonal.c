#include "main.h"
/**
  * print_diagonal - Fonction that draws a diagonal line,
  * in the terminal
  * @n: number of lines to be drawed
  */

void print_diagonal(int n)
{
	int j, i;

	if (n > 0)
	{
	for (j = 0; j < n; j++)
	{
		_putchar('\\');
		if (j == n - 1)
			continue;
		_putchar('\n');
		for (i = 0; i < j + 1; i++)
		{
			_putchar(' ');
		}
	}
	}
	_putchar('\n');
}
