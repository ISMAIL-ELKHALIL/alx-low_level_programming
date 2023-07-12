#include <stdlib.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: Pointer to the resulting string.
 */
char *_strcat(char *dest, const char *src)
{
	int i, j;
/* Find the end of the destination string */
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
    /* Append the source string to the destination string */
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: Length of the string.
 */
int _strlen(const char *str)
{
	int len;

	len = 0;
	/* Iterate over the string until the null terminator is found */
	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: Pointer to the new concatenated string.
 */
char *argstostr(int ac, char **av)
{
	int index, total_len, i;
	char *str;

	total_len = 0;
	/* Check if ac is 0 or av is NULL */
	if (ac == 0 || av == NULL)
		return (NULL);
	/* Calculate the total length required for the concatenated string */
	for (i = 0; i < ac; i++)
	{
		total_len += _strlen(av[i]) + 1;
			/* +1 for the newline character */
	}
	/* Allocate memory for the concatenated string */
	str = (char *)malloc(total_len * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	index = 0;
	for (i = 0; i < ac; i++)
	{
		/* Concatenate each argument to the string */
		str = _strcat(str, av[i]);
		/* Add a newline character after each argument */
		str[index + _strlen(av[i])] = '\n';
		index += _strlen(av[i]) + 1;
	}

	str[index] = '\0';
	return (str);
}
