#include "lists.h"

/**
 * sum_dlistint -  returns sum of all the data (n) of a dlistint_t
 * @head: pointer to head of dlistint_t
 * Return: integer sum of all values of dlistint_t
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
