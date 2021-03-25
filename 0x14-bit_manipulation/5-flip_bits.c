#include "holberton.h"
/**
 * flip_bits - number of bits you would need to flip
 * @n: one number
 * @m: another number
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int compare;
unsigned int count = 0;
compare = n ^ m;
while (compare > 0)
{
if (compare & 1)
count++;
compare >>= 1;
}
return (count);
}
