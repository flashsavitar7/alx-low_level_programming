#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: n num of bytes
 * Return: void
 */


char *_strncat(char *dest, char *src, int n)

}
	int len1, len2, i;

	len1 = strlen(dest);

	len2 = strlen(src);

	for (i = 0; i <= len2; i++)

	{
		dest[len1 + i] = src[i];
	}


	return (dest);
}

