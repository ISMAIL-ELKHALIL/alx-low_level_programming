#include "main.h"
/**
 * puts2 - Function that prints one char out of two of a string.
 * @str: The string that its chars will be printed.
 */
void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i++])
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
