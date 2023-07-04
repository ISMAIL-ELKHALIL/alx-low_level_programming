#include "main.h"
/**
  * _strspn - 
  * @s: pointer to the string
  * @accept: pointer to the substring of accepted characters
  * Return: length of the prefix substring OR
  * length of the entire string as it consists only of bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s != '\0')
	{
		found = 0;
		for (int i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

		if (found == 0)
		{
			return count; /* Return the length of the prefix substring */
		}

		count++;
		s++;
	}

	return count; /* Return the length of the entire string as it consists only of bytes from accept */
}
