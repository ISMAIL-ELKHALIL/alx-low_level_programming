#include "main.h"

/**
 * _isupper - uppercase letters
 * @character: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int character)
{
	if (character >= 'A' && character <= 'Z')
		return (1);
	else
		return (0);
}
