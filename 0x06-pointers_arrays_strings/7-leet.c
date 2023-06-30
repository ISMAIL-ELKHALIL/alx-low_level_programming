#include "main.h"
/**
  * leet - Fuontion that  encodes a string into 1337.
  * @str: string to be encoded.
  * Return: str the encode
  */

char *leet(char *str)
{
char *ptr = str;
char *leetChars = "aAeEoOtTlL";
char *leetReplacements = "4433007711";
int i;

	/* Iterate through each character of the string */
while (*ptr != '\0')
{
	/* Check if the character matches any of the leetChars */
	for (i = 0; i < 10; i++)
	{
		if (*ptr == leetChars[i])
		{
		/* Replace the character with its leetReplacements counterpart */
			*ptr = leetReplacements[i];
			break;
		}
	}
	/* Move to the next character in the string */
	ptr++;
}
return (str);
}
