#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlist.
 * @head: pointer to head ptr of dlist
 * @n: value to be added to new node
 * Return: address to new added node or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->prev = NULL;
new->next = *head;
new->n = n;
if (*head != NULL)
(*head)->prev = new;
*head = new;
return (*head);
}
