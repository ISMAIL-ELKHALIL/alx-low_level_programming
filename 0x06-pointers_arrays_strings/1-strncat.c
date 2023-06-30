#include "main.h"

/**
  * _strncat - Function that concatenates two strings.
  * @dest: resulting string
  * @src: string
  * @n: number of bytes
  * Return: @dest the concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

    /* Find the end of the destination string */
	while (*ptr != '\0')
	{
		ptr++;
	}
    /* Copy at most n bytes from the source string to the destination string */
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
    /* Add a terminating null byte if n is not zero */
	if (n > 0)
	{
		*ptr = '\0';
	}
    /* Return the resulting string */
	return (dest);
}
