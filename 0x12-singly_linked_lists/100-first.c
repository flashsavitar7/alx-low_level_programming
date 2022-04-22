#include <stdio.h>

/**
 * d - prints from init by the loader before main
 */

void d(void) __attribute__ ((constructor));

void d(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
