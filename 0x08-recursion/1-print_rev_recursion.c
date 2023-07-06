#include "main.h"
/**
  * _print_rev_recursion - Function that prints a string in reverse.
  * @s: String to be printed
  */
void _print_rev_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
	s++;
	i++;
	_print_rev_recursion(s);
	}
	while (i != 0)
	{
		_putchar(*s);
		i--;
	}
}
