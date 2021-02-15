#include "holberton.h"

/**
* puts_half - prints half of a string
* @str: copies address to string
*/
void puts_half(char *str)
{
char *p = str;
int count = 0;
while (*p)
{
p++;
count++;
}
p -= count / 2;
while (*p)
{
_putchar(*p);
p++;
}
_putchar('\n');
}
