#include "lists.h"

/**
 * add_dnodeint_end - adds  new node at the end of a list.
 * @head: pointer to head pointer of the list
 * @n: value of new node
 * Return: address of new node, null if its fails
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tmp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (*head == NULL)
	{
	*head = newnode;
	return (newnode);
	}
	if ((*head)->next == NULL)
	{
	(*head)->next = newnode;
	newnode->prev = *head;
	return (newnode);
	}
	tmp = *head;
	while (tmp->next)
	tmp = tmp->next;
	tmp->next = newnode;
	newnode->prev = tmp;
	return (newnode);
}