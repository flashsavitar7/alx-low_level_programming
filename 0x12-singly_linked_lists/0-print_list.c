#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 *
 * print_list - prints all elements inside list_t
 * @h - singly linked lists
 * return: number of nodes
 */



size_t print_list(const list_t *h)

{
	size_t j;
	for (j = 0; h; j++)

	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}


	return(j);
}
