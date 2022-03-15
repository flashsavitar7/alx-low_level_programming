#include "main.h"

/**
 * print_sign - checks and prints positive negative 0
 *
 * @n: integer
 *
 * Return: 1 -1 0 (success)
 */


int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
