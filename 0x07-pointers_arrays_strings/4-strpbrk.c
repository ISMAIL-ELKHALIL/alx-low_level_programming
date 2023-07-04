#include "main.h"
#include <stddef.h>
/**
  * _strpbrk - Function that searches a string for any of a set of bytes.
  * @s: input string.
  * @accept: set of bytes to search for.
  * Return: return a pointer to that byte in s OR
  *	  NULL to indicate that no match was found.
  */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
				/* Found a matching byte, return pointer to it */
			}
			a++;
		}
		s++;
	}
	return (NULL);
	/* No matching byte found, return NULL */
}
