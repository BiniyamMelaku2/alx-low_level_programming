#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value in the array
 * @max: maximum value in the array
 * Return: a pointer to the array
 */
int *array_range(int min, int max)
{
int *ptr;
int span, ct;
if (min > max)
return (NULL);
for (span = 0; span + min < max; span++)
;
ptr = (int *)malloc(sizeof(int) * (span + 1));
if (ptr == NULL)
return (NULL);
for (ct = 0; ct <= span; ct++)
{
ptr[ct] = ct + min;
}

return (ptr);
}
