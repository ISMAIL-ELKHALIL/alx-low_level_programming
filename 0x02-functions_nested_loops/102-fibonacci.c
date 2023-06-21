#include <stdio.h>

/**
 * main - Program that  Prints first 50 Fibonacci numbers, starting
 * with 1 and 2, separated by a comma followed by a space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int counter;
	long int fibo1 = 0, fibo2 = 1, sum;

	for (counter = 0; counter < 50; counter++)
	{
		sum = fibo1 + fibo2;
		printf("%ld", sum);

		fibo1 = fibo2;
		fibo2 = sum;

		if (counter == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
