#include "holberton.h"

/**
* print_rev - prints a string in reverse
*
* @s: copies address to the string
*/
void print_rev(char *s)
{
while (*s)
{
s++;
}
s--;
while (*s)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
