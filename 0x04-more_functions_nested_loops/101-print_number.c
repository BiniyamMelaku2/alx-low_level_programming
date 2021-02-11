#include "holberton.h"
/**
* print_number - prints a number
* @n: argument passes the number
*
*/
void print_number(int n)
{
int start, value, num, div, count;
count = 0;
div = 1;

if (n < 0)
{
_putchar(45);
n = -n;
}
else
{
n = n;
}
value = n;
num = n;
while (value)
{
count++;
value /= 10;
div *= 10;
}
for (start = count ; start > 1; start--)
{
div /= 10;
_putchar(num / div + '0');
num -= (num / div) *div;
}
_putchar(n % 10 + '0');
}
