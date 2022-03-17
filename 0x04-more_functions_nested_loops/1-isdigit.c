#include "main.h"



/**
 * _isdigit - prints a return value for digits 0 & 9
 *
 * @c: The digit in ASCII code
 *
 * Return: 1 for digit . 0 for the rest.
 *         */
int _isdigit(int c)

{
	if (c >= '0' && c <= '9')

	{
		return (1);
								}
	else
	{
		return (0);
	}
	_putchar('\n');
}
