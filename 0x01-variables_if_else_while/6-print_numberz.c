#include <stdlib.h>
#include <stdio.h>

/**
  * main - Program prints numbers form 0 to 9
  *
  * Return: Always 0 (Success)
  */

int main(void)
{

	int number;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');
	putchar('\n');
	return (0);
}
