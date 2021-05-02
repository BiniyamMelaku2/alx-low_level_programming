#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given position
 * @head: pointer to pointer of head of dlist
 * @index: is the index of the list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int c;
dlistint_t *posn = *head;
if (*head == NULL)
return (-1);
for (c = 0; posn && c < index; c++)
posn = posn->next;
if (!posn)
return (-1);
if (index == c)
{
if ((*head)->next == NULL)
{
*head = NULL;
free(posn);
return (1);
}
if (posn == *head)
{
*head = (*head)->next;
(*head)->prev = NULL;
free(posn);
return (1);
}
if (!(posn->next))
{
(posn->prev)->next = NULL;
free(posn);
return (1);
}
posn->next->prev = posn->prev;
posn->prev->next = posn->next;
free(posn);
return (1);
}
return (-1);
}
