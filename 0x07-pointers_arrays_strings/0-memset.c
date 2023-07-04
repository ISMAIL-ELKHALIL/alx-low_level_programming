#include "main.h"
/**
  * _memset - Ffunction that fills memory with a constant byte
  * @s: a pointer to the memory area
  * @b: constant byte to be filled
  * @n: number of bytes to be filled
  * Return: number of bytes to be filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

		/* Iterate over the memory area for n iterations */
	for (i = 0; i < n; i++)
	{
	/**
	  * Assign the constant byte b to each byte
	  * of the memory area pointed to by s
	  */
		s[i] = b;
	}
	return (s);
}
