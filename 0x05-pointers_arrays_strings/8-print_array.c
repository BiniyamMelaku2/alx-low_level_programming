#include <stdio.h>
/**
* print_array -  prints n elements of an array
* @a: copies address of array
* @n: number of array elements
*/
void print_array(int *a, int n)
{
int count;
for (count = 1; count <= n; count++)
{
if (count != n)
{
printf("%d, ", *a);
}
else
{
printf("%d", *a);
}
a++;
}
printf("\n");
}
