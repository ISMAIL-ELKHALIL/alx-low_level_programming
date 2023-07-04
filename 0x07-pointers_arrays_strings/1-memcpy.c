#include "main.h"
/**
  * _memcpy - unction that copies memory area.
  * @dest: pointer to the destination memory area
  * @src: pointer to the source memory area
  * @n: number of bytes to be copied
  * Return: the pointer to the destination memory area @dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* Iterate over the memory areas for n iterations */
	for (i = 0; i < n; i++)
	{
	/**
	  *  Copy each byte from the source memory area
	  *  to the destination memory area
	  */
		dest[i] = src[i];
	}
	return (dest);
}
