#include "holberton.h"
/**
* print_times_table - prints number n times table
* @n:  argument has value for number n
*/
void print_times_table(int n)
{
int count1, count2, result;
if (n >= 0 && n <= 15)
{
for (count1 = 0 ; count1 <= n ; count1++)
{
for (count2 = 0 ; count2 <= n ; count2++)
{
result = count1 * count2;
if (count2 == 0)
_putchar(result + '0');
else
{
_putchar(',');
_putchar(' ');
if (result <= 9)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + result);
}
else if (result > 9 && result < 100)
{
_putchar(' ');
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}
else if (result >= 100)
{
_putchar('0' + result / 100);
_putchar('0' + (result / 10) % 10);
_putchar('0' + result % 10);
}
}
}
_putchar('\n');
}
}
}
