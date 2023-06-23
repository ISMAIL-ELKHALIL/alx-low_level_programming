#include <stdio.h>
#include <stdlib.h>

/**
  * Main - Program that finds and prints the largest prime factor
  *of the number 612852475143
  * Return: Always 0 (Success)
  */
int main(void)
{
	long int i, lp = 2, tlp = 0, num = 612852475143;

	for (i = 2 ; i <= num; i++)
	{
		if (num % i == 0)
		{
			tlp = i;
			while (num % i == 0)
			{
				num = num / i;
			}
		}
		if (tlp > lp)
		{
			lp = tlp;
		}
	}
	if (num > lp)
	{
		lp = num;
	}

	printf("%ld\n", lp);
	return (0);
}
