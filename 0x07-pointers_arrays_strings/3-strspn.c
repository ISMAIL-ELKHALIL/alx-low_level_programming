#include "main.h"

/**
  * _strspn - Function that gets the length of a prefix substring.
  * @s: pointer to the string
  * @accept: pointer to the substring of accepted characters
  * Return: length of the prefix substring OR
  * length of the entire string as it consists only of bytes from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found = 1;
	char *a;

	while (*s && found)
	{
		found = 0;
		a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}
		if (found)
		{
			length++;
			s++;
		}
	}
	return (length);
}
