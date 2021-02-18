#include "holberton.h"

/**
* reverse_array - reverses the content of an array
* @a: an array of integers
* @n: the number of elements of the array
*
*/
void reverse_array(int *a, int n)
{
int count, tmp;
int *ptr = a;
ptr += n;

for (count = 1; count <= n / 2; count++)
{
ptr--;
tmp = *a;
*a = *ptr;
*ptr = tmp;
a++;
}
}
