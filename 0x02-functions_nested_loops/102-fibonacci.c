#include <stdio.h>
#include <stdlib.h>
/**
* main - prints 50 fibonacci numbers
*
* Return: 0 No Erro
*/

int main(void)
{
long prev, next, temp;
int counter;
prev = 1;
next = 2;
counter = 1;
while (counter < 50)
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
