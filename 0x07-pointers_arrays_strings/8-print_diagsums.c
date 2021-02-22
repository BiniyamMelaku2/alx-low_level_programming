#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals
* @a: pointer to an array of an array
* @size: size of square matrix (row, column)
*/
void print_diagsums(int *a, int size)
{
int i, j, backsum = 0, fwdsum = 0;
int *ptr = a;

for (j = 0; j < size; j++)
{
backsum +=  ptr[(size + 1) * j];
}
for (i = 0; i < size; i++)
{
fwdsum +=  ptr[(size - 1) * (i + 1)];
}
printf("%d, %d\n", backsum, fwdsum);
}

