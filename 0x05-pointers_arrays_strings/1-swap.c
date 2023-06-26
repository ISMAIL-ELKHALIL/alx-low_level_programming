#include "main.h"

/**
  * swap_int -  Function that swaps the values of two integers.
  * @a: first number to swap
  * @b: secand number to swap
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
