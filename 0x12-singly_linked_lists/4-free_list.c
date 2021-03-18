#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: type list_t pointer to head
 */

void free_list(list_t *head)
{
list_t *headcp = head, *next;
while (headcp != NULL)
{
next = headcp->next;
free(headcp->str);
free(headcp);
headcp = next;
}
head = NULL;
}
