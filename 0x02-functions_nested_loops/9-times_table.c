#include "holberton.h"
/**
* times_table - prints the 9 times table
*
*/
void times_table(void)
{
int count1, count2, result;
for (count1 = 0 ; count1 < 10 ; count1++)
{
for (count2 = 0 ; count2 < 10 ; count2++)
{
result = count1 * count2;
if (count2 == 0)
_putchar(result + '0');
else if (result <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + result);
}
else if (result > 9)
{
_putchar(',');
_putchar(' ');
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}
}
_putchar('\n');
}
}
