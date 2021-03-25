#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to get set
 * @index: starting from 0 of the bit to index
 * Return: 1 if it worked, or -1 if an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int num = *n;
unsigned int count = index;
for (count = 0; num; count++)
num >>= 1;
if (index >= count || n == NULL)
return (-1);
num = 1 << index;
num = ~num;
*n &= num;
return (1);
}
