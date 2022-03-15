#include "main.h"

/**
 * _isalpha - returns 1 for letters upper and lowercase
 *
 *@c: is letters of alphabet in ASCII code upper & lower
 *
 * Return: 1 for lower and uppercase. 0 for others
 */

int _isalpha(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
