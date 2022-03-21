#include "main.h"
#include <stdio.h>

/**
*swap_int - swaps the values of two integers.
*@a: value to be swapped.
*@b: value to be swapped.
*Return: 0 .
*/


void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;


}
