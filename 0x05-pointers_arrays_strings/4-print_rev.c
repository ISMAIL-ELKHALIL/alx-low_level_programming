#include "main.h"
#include "2-strlen.c"
/**
  * print_rev - Function that prints a string, in reverse,
  * followed by a new line
  * @s: String to be printed
  */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (j = i; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

