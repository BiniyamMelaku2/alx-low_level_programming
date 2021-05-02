#include "lists.h"

/**
 * dlistint_len - returns length of doubly linked list
 * @h: pointer to head of doubly linked list
 * Return: the length of doubly list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t c = 0;
while (h != NULL)
{
c++;
h = h->next;
}
return (c);
}
