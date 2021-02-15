#include "holberton.h"

/**
* puts2 - prints every other character
* @str: copies address to string
*/
void puts2(char *str)
{
while (*str)
{
_putchar(*str);
str += 2;
}
_putchar('\n');
}
