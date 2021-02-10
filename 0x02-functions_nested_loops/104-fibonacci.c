#include <stdio.h>
#include <stdlib.h>
/**
* main - prints first 98 fibonacci numbers
*
* Return: 0 NoError
*/

int main(void)
{
double prev, next, temp;
int counter;
prev = 1;
next = 2;
counter = 1;
while (counter < 98)
{
printf("%0.f, ", prev);
temp = prev + next;
prev = next;
next = temp;
counter++;
}
printf("%0.f\n", prev);
return (0);
}
