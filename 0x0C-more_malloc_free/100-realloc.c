#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates memory with new size
 * @ptr: pointer to allocated memory
 * @old_size: old size of memory
 * @new_size: new size of memory
 * Return: a pointer to the reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int ct = 0;
char *newptr;
char *oldptr = ptr;
if (ptr == NULL)
newptr = malloc(new_size);
else if (new_size == old_size)
return (ptr);
else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else
{
newptr = malloc(new_size);
for (ct = 0; ct <= old_size; ct++)
newptr[ct] = oldptr[ct];
}
free(ptr);
return ((void *)newptr);
}
