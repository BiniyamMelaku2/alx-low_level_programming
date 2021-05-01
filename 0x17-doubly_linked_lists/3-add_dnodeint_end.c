#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlist.
 * @head: pointer to head ptr of dlist
 * @n: value to be added to new node
 * Return: address to new added node or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *end = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (*head == NULL)
{
new->prev = NULL;
new->next = *head;
*head = new;
return (new);
}
while (end->next)
{
end = end->next;
}
end->next = new;
new->prev = end;
new->next = NULL;
return (new);
}
