#include "main.h"
#include <stddef.h>
/**
  * _strchr - Function that locates a character in a string.
  * @s: pointer to the string
  * @c: character to be located
  * Return: The pointer to that character in the string OR
  *		NULL to indicate that the character is not found in the string.
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
		return (s);
	/* Return the pointer to the first occurrence of the character c */
		}
		s++;
		/* Move to the next character in the string*/
	}

	return (NULL);
}
