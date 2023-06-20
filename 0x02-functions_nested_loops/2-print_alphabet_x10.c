#include "main.h"
#include "1-alphabet.c"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int count = 1;

	while (count <= 10)
	{
		print_alphabet();
		_putchar('\n');
		count++;
	}
}
