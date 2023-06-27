#include "main.h"
/**
 * rev_string - Function that reverses a string.
 * @s: String to be reversed.
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char tmps;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		tmps = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmps;
	}
}
