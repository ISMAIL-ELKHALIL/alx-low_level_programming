#include <stdlib.h>
#include <stdio.h>

/**
  * main - Program prints numbers in Hexadecimal 0 to 9 , 'a' to 'f'
  *
  * Return: Always 0 (Success)
  */

int main(void)
{

	int number;
	char letter;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
