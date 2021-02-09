#include <stdio.h>
#include <stdlib.h>
/**
* main - prints 98 fibonacci numbers
*
* Return: 0
*/

int main(void)
{
long double prev, next, temp;
int counter;
prev = 1;
next = 2;
counter = 1;
while (counter < 98)
{
printf("%0.Lf, ", prev);
temp = prev + next;
prev = next;
next = temp;
counter++;
}
printf("%0.Lf\n", next);
return (0);
}
