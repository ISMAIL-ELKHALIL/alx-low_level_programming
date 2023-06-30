#include "main.h"

/**
  * _strncpy - Function that copies a string.
  * @dest: resulting string
  * @src: source string
  * @n: number of bytes (characters)
  * Return: @dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

    /*
     *  Copy at most n characters from the source
     *  string to the destination string
     */
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
    /*
     *  If n is greater than zero, pad the remaining
     * characters with null bytes
     */
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
    /* Return the resulting string */
	return (dest);
}
