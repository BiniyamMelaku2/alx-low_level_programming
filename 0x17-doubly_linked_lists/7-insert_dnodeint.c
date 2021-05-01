#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to head of dlist
 * @idx: is the index of the list
 * @n: data of new node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *posn = *h;
dlistint_t *new;
if (*h == NULL)
return (NULL);
while (posn->next && idx--)
{
posn = posn->next;
}
if (idx >= 1 && posn->next == NULL)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (posn == *h)
{
new->prev = NULL;
new->next = *h;
(*h)->prev = new;
posn = NULL;
}
if (posn != *h)
{
(posn->prev)->next = new;
new->prev = posn->prev;
posn->prev = new;
new->next = posn;
}
return (new);
}
