#include "lists.h"

/**
 * print_list - check the code for Holberton School students.
 * @h: instance of struct list data type
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
int len = 0, nodes = 0;
char *str;
while (h)
{
len = h->len;
str = h->str;
if (!str)
{
str = "(nil)";
len = 0;
}
printf("[%d] %s\n", len, str);
nodes++;
h = h->next;
}
return (nodes);
}
