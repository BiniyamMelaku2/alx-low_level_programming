#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - prints every element of the array
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t c;
if (array != NULL && action != NULL)
{
for (c = 0; c < size; c++)
{
action(array[c]);
}
}
}
