#ifndef MAIN_H
#define MAIN_H
#include<stdlib.h>
#include<stdio.h>
/**
  * print_alphabet - Function that prints the alphabet
  * lowercase form 'a' to 'z'.
  */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
}
#endif
