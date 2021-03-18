#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list
 * @head: pointing to head of list
 * @str: value to store at the new node
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
int lenstr;
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
for (lenstr = 0; str[lenstr]; lenstr++)
;
new->len = lenstr;
new->next = *head;
*head = new;
return (*head);
}
