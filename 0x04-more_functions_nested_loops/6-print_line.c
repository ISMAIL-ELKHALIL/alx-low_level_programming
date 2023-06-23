#include "main.h"

/**
  * print_line - Fonction that draws a straight line,
  * in the terminal
  * @n: number of lines to be drawed
  * Return: Always 0 (Success)
  */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
