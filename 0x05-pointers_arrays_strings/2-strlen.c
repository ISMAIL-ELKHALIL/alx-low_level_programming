#include "main.h"
/**
  * _strlen(char *s) - Function that returns the length of a string
  * @s: the string that will be tested
  */

int  _strlen(char *s)
{
	int len = 0;

	while(*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}
