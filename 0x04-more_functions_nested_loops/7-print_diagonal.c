#include "holberton.h"
/**
* print_diagonal - draws diagonal line
* @n: n argument line length
*/

void print_diagonal(int n)
{
int count, spacer;
count = 1;
while (count > 0 && count <= n)
{
spacer = count - 1;
while (spacer)
{
_putchar(' ');
spacer--;
}
_putchar('\\');
_putchar('\n');
count++;
}
if (n <= 0)
{
_putchar('\n');
}
}
