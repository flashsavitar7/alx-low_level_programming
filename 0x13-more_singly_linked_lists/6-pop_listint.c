#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: header list.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	int headnode;
	listint_t *h;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;

	headnode = temp->n;

	h = temp->next;

	free(temp);

	*head = h;

	return (headnode);
}
