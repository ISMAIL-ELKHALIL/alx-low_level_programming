#include "main.h"
#include "2-strlen.c"
/**
  * print_rev - Function that prints a string, in reverse,
  * followed by a new line
  * @s: String to be printed
  */
void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
