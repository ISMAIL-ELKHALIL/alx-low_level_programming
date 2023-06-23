#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @character: character to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int character)
{
	if (character >= '0' && character <= '9')
		return (1);
	else
		return (0);
}
