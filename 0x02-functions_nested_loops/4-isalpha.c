#include "main.h"

/**
  * _isalpha - Verifies if a character is an Alphabet.
  *
  * @c: used  to verifie
  *
  * Return: 1 if is true and 0 if false
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
