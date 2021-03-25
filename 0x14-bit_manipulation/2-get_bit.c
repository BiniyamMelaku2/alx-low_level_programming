#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to get checked
 * @index: starting from 0 of the bit to index
 * Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int num = n;
unsigned int count = index;
for (count = 0; num; count++)
{
num >>= 1;
}
if (index > 64)
{
return (-1);
}
for (count = index; count; count--)
{
n >>= 1;
}
return (n & 1);
}
