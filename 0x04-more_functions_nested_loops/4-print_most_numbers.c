#include "main.h"
/**
 *print_most_numbers - print 0 -9 except 2 & 4
 *
 *
 *Returns: 0 Always (success)
 */

void print_most_numbers(void)

{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '4' && i != '2')
			_putchar(i);

	}
	  _putchar('\n');
}
