#include "holberton.h"
/**
* more_numbers - prints 10x numbers 1-14
* Return: 0 no Error
*/
void more_numbers(void)
{
int num, timer;
for (timer = 0 ; timer < 10; timer++)
{
for (num = 0 ; num < 15 ; num++)
{
if (num > 9)
{
_putchar(49);
}
_putchar(num % 10 + '0');
}
_putchar('\n');
}
}
