#include "lists.h"

/**
 * print_dlistint - prints all of doubly linked list nodes
 * @h: pointer to head of doubly linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t c = 0;
if (h == NULL)
exit(1);
while (h != NULL)
{
printf("%d\n", h->n);
c++;
h = h->next;
}
return (c);
}
