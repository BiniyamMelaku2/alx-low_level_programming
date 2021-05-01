#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given position
 * @head: pointer to pointer of head of dlist
 * @index: is the index of the list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *posn = *head;
if (*head == NULL)
return (-1);
while (posn->next && index--)
{
posn = posn->next;
}
if (index >= 1 && posn->next == NULL)
return (-1);
if (posn == *head)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(posn);
posn = NULL;
return (1);
}
if (posn != *head)
{
(posn->prev)->next = posn->next;
(posn->next)->prev = posn->prev;
free(posn);
posn = NULL;
}
return (1);
}
