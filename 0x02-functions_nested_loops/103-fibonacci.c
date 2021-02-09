#include <stdio.h>
#include <stdlib.h>
/**
* main -  prints an even sequence sum of fibonaccis
*
* Return: 0
*/

int main(void)
{
long prev, next, temp;
long sum = 0;
prev = 1;
next = 2;
while (next < 4000000)
{
temp = prev + next;
prev = next;
next = temp;
if (prev % 2 == 0)
sum += prev;
}

printf("%li\n", sum);
return (0);
}
