#include "lists.h"

/**
 * list_len - number of elements in a linked list_t list
 * @h: instance of struct list data type
 * Return: int value or size_t type number of nodes
 */
size_t list_len(const list_t *h)
{
int nodes = 0;
for (nodes = 0; h; nodes++)
h = h->next;
return (nodes);
}
