#include "main.h"

/**
  * _islower - Verifies if a character is lowercase
  *
  * @c: used  to verifie
  *
  * Return: 1 if is true and 0 if false
  */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
