#include <stdio.h>
/**
  * print_diagsums - function that prints the sum of
  * the two diagonals of a square matrix of integers.
  * @a: pointer to the square matrix
  * @size: size of the matrix
  */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;  /* Initialize sum for the main diagonal*/
	int sum2 = 0;  /* Initialize sum for the secondary diagonal*/
	int i;
	/* Calculate the sum of the main diagonal (top-left to bottom-right) */
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}
	/* Calculate the sum of the secondary diagonal (top-right to bottom-left) */
	for (i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("Sum of main diagonal: %d\n", sum1);
	printf("Sum of secondary diagonal: %d\n", sum2);
}
