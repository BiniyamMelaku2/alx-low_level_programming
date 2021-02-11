#include "holberton.h"
/**
* print_line - draws straight line
* @n: n argument line length
*/

void print_line(int n)
{
int count = 1;
while (count > 0 && count <= n)
{
_putchar('_');
count++;
}
_putchar('\n');
}
