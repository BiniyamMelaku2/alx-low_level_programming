#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number to get set
 * @index: starting from 0 of the bit to index
 * Return: 1 if it worked, or -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int count = index;
if (n == NULL)
return (-1);
if (*n == 0)
{
*n = 1;
for (; count; count--)
*n <<= 1;
}
else
*n |= (1 << index);
return (1);
}
