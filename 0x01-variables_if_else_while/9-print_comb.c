#include <stdlib.h>
#include <stdio.h>

/**
  * main - Program prints all the possible combinations of  signle-digit number
  *
  * Return: Always 0 (Success)
  */

int main(void)
{

	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	if (number == 9)
		continue;
	putchar(',');
	putchar(' ');
	}
	putchar('n');
	return (0);
}
