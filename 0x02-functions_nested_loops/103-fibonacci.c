#include <stdio.h>

/**
 * main - Program that prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fibo1 = 0, fibo2 = 1, sum, total;

	do {
		sum = fibo1 + fibo2;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
		{
			total += sum;
		}
		fibo1 = fibo2;
		fibo2 = sum;
	} while (1);
	printf("%d\n", total);

	return (0);
}
