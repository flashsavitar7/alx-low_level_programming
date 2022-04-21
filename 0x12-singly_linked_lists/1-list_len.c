#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * list_len - finds the number of nodes in a list
 * @h: pointer for singly linked list
 * Return: number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	int j;

	for (j = 0; h; j++)

		h = h->next;

	return (j);
}
