#include "main.h"
/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	/* Iterate over each character of the string */
	while (*ptr != '\0')
	{
	/* Check if the character is a lowercase letter */
		if (*ptr >= 'a' && *ptr <= 'z')
		{
		/* Convert the lowercase letter to uppercase */
		*ptr = *ptr - 'a' + 'A';
	}
		/* Move to the next character */
		ptr++;
	}
	return (str);
}
