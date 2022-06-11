#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to head pointer of the list
 * @n: value of new node
 * Return: address of new node or null if its fails
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

    newnode = malloc(sizeof(dlistint_t));

    if (newnode == NULL)
    return(NULL);
    newnode -> n = n;
    newnode -> next = 0;
    newnode -> prev = 0;

    if (*head == NULL){
       *head = newnode;
        return(newnode);
    }
    
    (*head) -> prev = newnode;
    newnode -> next = *head;
    *head = newnode;
    return(newnode);

}


