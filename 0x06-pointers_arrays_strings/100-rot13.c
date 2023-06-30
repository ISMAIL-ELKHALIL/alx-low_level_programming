#include "main.h"
/**
  * rot13 - Function that encodes a string using rot13.
  * @str: string to be encoded
  * Return: encoded string
  */

char *rot13(char *str)
{
char *ptr = str;
int i;

	while (*ptr != '\0')
	{
		for (i = 0; ((*ptr >= 'a' && *ptr <= 'm') ||
					(*ptr >= 'A' && *ptr <= 'M')) && i < 13; i++)
		{
			*ptr += 13;
		}
		for (i = 0; ((*ptr >= 'n' && *ptr <= 'z') ||
					(*ptr >= 'N' && *ptr <= 'Z')) && i < 13; i++)
		{
			*ptr -= 13;
		}
		ptr++;
	}
	return (str);
}
