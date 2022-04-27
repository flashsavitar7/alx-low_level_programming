#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: header list.
 *
 * Return: no return.
 */

void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: header list.
 *
 * Return: size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t newnodes = 0;
	listp_t *ptr1, *new, *add;
	listint_t *curr;

	ptr1 = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = ptr1;
		ptr1 = new;

		add = ptr1;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&ptr1);
				return (newnodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		newnodes++;
	}

	*h = NULL;
	free_listp2(&ptr1);
	return (newnodes);
}
