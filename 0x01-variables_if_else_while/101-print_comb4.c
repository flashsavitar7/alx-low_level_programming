#include <stdio.h>
/**
 * main - prints a combination of three digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)

{

	int t;
	int a;
	int b;

	for (t = 0; t <= 9; t++)


	{
		for (a = t + 1; a <= 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
	{
		putchar(t + '0');
		putchar(a + '0');
		putchar(b + '0');

		if (t < 7)
		{
		putchar(',');
		putchar(' ');
		}
	}

	}




	}

		putchar('\n');
		return (0);

}
