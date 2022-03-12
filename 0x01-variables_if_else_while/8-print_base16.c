#include <stdio.h>

/**
 * main - prints hexadecimal in lower case
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	char h;

	for (h = 0; h <= 9; h++)
	putchar(h);

	for (h = 'a'; h <= 'f'; h++)
	putchar(h);

	putchar('\n');
	return (0);

}
