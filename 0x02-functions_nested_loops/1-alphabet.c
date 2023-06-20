#include "main.h"

/**
 * print_alphabet - Function that prints the alphabet
 * lowercase form 'a' to 'z'.
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('/n');
}
