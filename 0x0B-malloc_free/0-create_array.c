#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: reserve memory size
 * @c: char value to initialize with
 * Return: char pointer to memory
*/
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int index = 0;

if (size == 0)
{
return (NULL);
}
else
{
ptr = malloc(sizeof(char) * size);
if (ptr == NULL)
{
return (NULL);
}
while (index < size)
{
ptr[index++] = c;
}
}
return (ptr);
}
