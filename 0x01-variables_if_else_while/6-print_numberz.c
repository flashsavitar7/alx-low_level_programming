#include <stdio.h>

/**
 * main - print num from 0 to 10 witout printf
 *
 * Return: Alw2ays 0 (success)
 */



int main(void)

{
	int i;

	for (i = 0; i < 10; ++i)
	{
	putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
