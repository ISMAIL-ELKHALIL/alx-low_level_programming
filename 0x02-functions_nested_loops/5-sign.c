#include "main.h"
/**
 * print_sign - Fonction that prints the sign of a number.
 *
 * @number: The number of which the sign will be printed.
 *
 * Return: 1 if the number is greater than zero
 *         0 if the number is zero
 *         -1 if the number is less than zero
 */
int print_sign(int number)
{
	if (number > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (number == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
