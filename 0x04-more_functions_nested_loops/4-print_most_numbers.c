#include "holberton.h"
/**
* print_most_numbers - Print all numerics except 2 and 4
*
*/

void print_most_numbers(void)
{
int ch = 48;
while (ch < 58)
{
if (ch == 50 || ch == 52)
{
ch++;
continue;
}
_putchar(ch);
ch++;
}
_putchar('\n');
}
