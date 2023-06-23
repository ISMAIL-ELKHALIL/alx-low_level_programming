#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
 */

void print_most_numbers(void)
{
	char character;

	for (character = '0'; character <= '9'; character++)
	{
		if (!(character == '2' || character == '4'))
			_putchar(character);
	}
	_putchar('\n');
}
