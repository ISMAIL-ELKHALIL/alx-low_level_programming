#include "main.h"
/**
  * _strlen - Function that returns the length of a string
  * @s: the string that will be tested
  * Return: returns the length of the string s
  */

int  _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
