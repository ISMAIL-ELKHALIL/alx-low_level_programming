#include <stdio.h>

/**
 * main -  program that prints ==>
 *exactly and that piece of art is useful" - Dora Korpar, 2015-10-19,
 *without using any functions listed in the NAME section of
 *the man (3) printf or man (3) puts
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}
