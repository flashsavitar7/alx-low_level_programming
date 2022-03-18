#include <stdio.h>

/**
 * main - fizzbuzz project prints fizz and buzz for
 *
 * 3 & 5 multiples
 *
 * Return: 0
 */

int main(void)

{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		}

		else if ((i % 3) == 0)
		{
		printf(" Fizz");
		}
		else if ((i % 5) == 0)
		{
		printf(" Buzz");
		}
		else
		{
		printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
