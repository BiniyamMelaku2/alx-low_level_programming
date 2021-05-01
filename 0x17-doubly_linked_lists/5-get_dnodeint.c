#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head of dlist
 * @index:  index of the node, starting from 0
 * Return: pointer to nth node or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *end = head;
if (head == NULL)
return (NULL);
if (index == 0)
return (head);
while (end->next && index--)
{
end = end->next;
if (end == NULL)
return (NULL);
}
return (end);
}
