#include "main.h"

/**
*_strlen - returns the length of a string..
*@s: value for length.
*Return: not.
*/

int _strlen(char *s)

{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);


}
