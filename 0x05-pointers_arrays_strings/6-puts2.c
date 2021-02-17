#include "holberton.h"

/**
* puts2 - prints every other character
* @str: copies address to string
*/
void puts2(char *str)
{
int count = 0;
char *ptr = str;
while (*ptr)
{
count++;
ptr++;
}
while (count > 0)
{
_putchar(*str);
str += 2;
count -= 2;
}
_putchar('\n');
}
