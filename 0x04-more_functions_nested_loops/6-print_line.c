#include "main.h"
/**
 *print_line - print a line across terminal
 *
 * @n: number of line printed
 *
 *Return: no return
 */

void print_line(int n)

{
	int i;

	for (i = 0; i < n; i++)
	{

		_putchar(95);
	}
	_putchar('\n');
}
