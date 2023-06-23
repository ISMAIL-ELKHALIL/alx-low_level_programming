#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    char character;

    character = 'A';
    printf("%c: %d\n", character, _isupper(character));
    character = 'a';
    printf("%c: %d\n", character, _isupper(character));
    return (0);
}
