#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int ct;
void *ptr;
char *s;

ptr = malloc(sizeof(size) * nmemb * size);

if (nmemb == 0 || size == 0)
return (NULL);
if (ptr == NULL)
return (NULL);
s = ptr;
for (ct = 0; ct < (nmemb * size); ct++)
s[ct] = 0;

return (ptr);
}
