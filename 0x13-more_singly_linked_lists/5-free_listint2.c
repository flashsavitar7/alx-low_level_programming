include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: header list.
 *
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *now;

	if (head != NULL)
	{
		now = *head;
		while ((temp = now) != NULL)
		{
			now = now->next;
			free(temp);
		}
		*head = NULL;
	}
}
