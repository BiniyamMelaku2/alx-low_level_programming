#include <stdio.h>

/**
* main - prints 98 fibonacci numbers
*
* Return: 0
*/

int main(void)
{
long prev, next, temp;
int counter;
prev = 1;
next = 2;
counter = 1;
while (counter< 85)
{
printf("%li, ", prev);
temp = prev + next;
prev = next;
next = temp;
counter++;
}
printf("%li\n", prev);
return (0);
}
