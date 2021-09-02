#include "search_algos.h"

/**
 * binary_search - searches for a value by Binary search algorithm
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index of the value, else -1
 */

int binary_search(int *array, size_t size, int value)
{
size_t c = 0, pivot = 0, index = 0, loop = size;
if (size == 0 || !array)
return (-1);
while (loop--)
{
printf("Searching in array: ");
for (c = 0; c < size - 1; c++)
printf("%d, ", array[c]);
printf("%d\n", array[c]);
pivot = (size + size % 2) / 2;
if (value == array[pivot - 1])
{
return (pivot - 1 + index);
}
if (pivot < 2)
{
printf("Searching in array: ");
printf("%d\n", array[pivot]);
if (value == array[pivot])
return (pivot + index);
break;
}
else if (value < array[pivot - 1])
{
size = pivot - 1;
continue;
}
else if (value > array[pivot - 1])
{
array += pivot;
index = size / 2 + size % 2;
size = size - pivot;
}
}
return (-1);
}
