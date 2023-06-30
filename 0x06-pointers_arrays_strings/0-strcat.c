#include "main.h"
/**
  * _strcat - Function that concatenates two strings.
  * @dest: string
  * @src: string
  */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

    /* Find the end of the destination string*/
	while (*ptr != '\0')
		ptr++;

    /* Append the source string to the destination string */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
    /* Add a terminating null byte */
	*ptr = '\0';
    /* Return the resulting string */
	return (dest);
}
