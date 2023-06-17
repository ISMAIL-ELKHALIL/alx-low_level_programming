#include <stdio.h>
#include<stdlib.h>

/**
  * main - Program to print alphabet in Lowercase in reverse from 'z' to 'a'
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char alphabet_letter;

	for (alphabet_letter = 'z' ; alphabet_letter >= 'a'; alphabet_letter--)
	putchar(alphabet_letter);
	putchar('\n');
	return (0);
}
