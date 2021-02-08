#include "holberton.h"
/**
* print_sign - prints the sign of a number
* @n: n argument has value of number in ASCII
* Return: 1/0/-1 number is +/0/-
*
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
