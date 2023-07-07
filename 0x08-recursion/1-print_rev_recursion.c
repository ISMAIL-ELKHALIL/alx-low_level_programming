#include "main.h"
/**
  * _print_rev_recursion - Function that prints a string in reverse.
  * @s: String to be printed
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;  /* base case: end of string reached*/
	}
	_print_rev_recursion(s + 1);  /* recursive call with next character*/
	_putchar(*s);
}
