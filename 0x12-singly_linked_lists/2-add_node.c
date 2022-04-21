#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - gets length of the string
 * @s: string
 * Return: length of the string
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * add_node - adds new nodes to  list
 * @head: current position in  list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */

list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *ele;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new = *head;
	ele = malloc((len + 1) * sizeof(char));
	if (ele == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		ele[i] = str[i];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(ele);
		return (NULL);
	}
	new->str = ele;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
