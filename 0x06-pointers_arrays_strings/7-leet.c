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

while (*ptr != '\0')
{
	for (i = 0; i < 10; i++)
	{
		if (*ptr == leetChars[i])
		{
			*ptr = leetReplacements[i];
			break;
		}
	}
	ptr++;
}
return (str);
}
