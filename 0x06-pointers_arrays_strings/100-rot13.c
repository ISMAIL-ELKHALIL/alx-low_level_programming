#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			char base = (str[i] >= 'a' && str[i] <= 'z') ? 'a' : 'A';

			str[i] = ((str[i] - base + 13) % 26) + base;
		}
		i++;
	}

	return (str);
}
