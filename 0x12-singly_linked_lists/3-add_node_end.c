#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list
 * @head: pointing to head of list
 * @str: value to store at the new node
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
int lenstr;
list_t *new, *headcp = *head;
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
for (lenstr = 0; str[lenstr]; lenstr++)
;
new->len = lenstr;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}
while (headcp->next != NULL)
headcp = headcp->next;
headcp->next = new;
return (new);
}
