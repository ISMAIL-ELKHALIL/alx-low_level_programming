#include<stdlib.h>
#include<stdio.h>

/**
  * main - A program that prints _putchar
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char *word = "_putchar\n";
	char *character = word;

	while (*character != '\0')
	{
		putchar(*character);
		character++;
	}
	return (0);
}
