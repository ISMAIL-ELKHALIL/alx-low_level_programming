#include "main.h"

/**
 * jack_bauer - Fonction that prints every min of the day of
 *              Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int h;
	int min;

	for (h = 0; h <= 23; h++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}