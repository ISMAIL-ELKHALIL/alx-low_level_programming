#include <stdlib.h>
#include <stdio.h>

/**
  * main - Program prints all the possible combinations of  two-digit numbers
  *
  * Return: Always 0 (Success)
  */

int main(void)
{

	int number1;
	int number2;

	for (number1 = 0; number1 < 9; number1++)
	{
		for (number2 = number1 + 1; number2 < 10; number2++)
		{
			putchar((number1 % 10) + '0');
			putchar((number2 % 10) + '0');
		if (number1 == 8 && number2 == 9)
			continue;
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
