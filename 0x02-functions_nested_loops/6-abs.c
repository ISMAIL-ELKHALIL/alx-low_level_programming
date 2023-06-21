#include "main.h"
/**
 * _abs - Fonction that prints the absolute value of a number.
 *
 * @number: The number of which its abs will be printed.
 *
 * Return: same number if the number is greater than zero
 *         0 if the number is zero
 *         number multiplayed by -1 if the number is less than zero
 */
int _abs(int number)
{
	if (number > 0)
	{
		return (number);
	}
	else if (number == 0)
	{
		return (number);
	}
	else
	{
		return (number * -1);
	}
}
