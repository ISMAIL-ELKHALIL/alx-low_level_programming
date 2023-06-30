#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int i, tmpr;

	/* Iterate over the array from both ends towards the middle */
	for (i = n - 1; i >= n / 2; i--)
	{
	/* Swap the elements at symmetric positions */
		tmpr = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmpr;
	}
}
