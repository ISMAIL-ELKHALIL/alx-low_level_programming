#include <stdio.h>
#include<stdlib.h>

/**
  * main - Program to print alphabet in Lowercase except 'e' and 'q'
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char alphabet_letter;

	for (alphabet_letter = 'a' ; alphabet_letter <= 'z'; alphabet_letter++)
	if (alphabet_letter != 'e' || alphabet_letter != 'q')
	putchar(alphabet_letter);
	putchar('\n');
	return (0);
}
