#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head of dlist
 * @index:  index of the node, starting from 0
 * Return: pointer to nth node or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int c;
for (c = 0; head; c++)
{
if (index == c)
break;
head = head->next;
}
if (head == NULL)
return (NULL);
return (head);
}
