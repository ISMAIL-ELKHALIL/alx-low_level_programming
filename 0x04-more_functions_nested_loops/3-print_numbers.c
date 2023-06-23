#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	char character;

	for (character = '0'; character <= '9'; character++)
	{
		_putchar(character);
	}
	_putchar('\n');
}
