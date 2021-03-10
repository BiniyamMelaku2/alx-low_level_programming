#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function searches for an int value
 * @size: the number of elements in the array
 * @cmp: is a pointer to the function
 * @array: an array set to to be searched
 * Return: index of first int element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int c;
for (c = 0; c < size; c++)
if (cmp(array[c]))
return (c);
return (-1);
}
