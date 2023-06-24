#include "main.h"

/**
 * print_number - Fonction that prints an integer.
 * @n: The integer to be printed in the terminal.
 */
void print_number(int n)
{
	int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}

	if ((number / 10) > 0)
		print_number(number / 10);

	_putchar((number % 10) + '0');
}
