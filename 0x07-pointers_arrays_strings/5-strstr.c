#include "main.h"
#include <stddef.h>
/**
  * _strstr - Function that locates a substring.
  * @haystack: input string
  * @needle: substring to search for
  * Return: If it is empty, it returns haystack itself as the substring.
  * returns haystack as the pointer to the beginning of the located substring.
  * returns NULL to indicate that the substring was not found.
  */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
		/* Empty needle, return haystack as the substring */
	}
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
			/* Found the substring, return pointer to its beginning */
		}
		haystack++;
	}
	return (NULL);
	/* Substring not found, return NULL */
}
