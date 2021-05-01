#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list memory alloc.
 * @head: pointer to head of dlist node
 */
void free_dlistint(dlistint_t *head)
{
if (head == NULL)
exit(1);

while (head->next)
{
head = head->next;
free(head->prev);
head->prev = NULL;
}
head->prev = NULL;
free(head);
exit(0);
}
