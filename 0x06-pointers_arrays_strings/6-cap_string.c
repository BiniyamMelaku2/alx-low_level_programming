#include "holberton.h"

/**
* cap_string - capitalizes all words of a string
* @str: address to the string
* Return: char array
*/
char *cap_string(char *str)
{
char *ptr = str;

if (*ptr > 96 && *ptr < 123)
{
*ptr -= 32;
ptr++;
}

while (*ptr != '\0')
{
switch (*ptr)
{
case '\n':
case '\t':
case '.':
case ',':
case ';':
case '!':
case '?':
case ' ':
case '"':
case '(':
case ')':
case '{':
case '}':
{
if ((*(ptr + 1)) > 96 && (*(ptr + 1)) < 123)
{
*(ptr + 1) -= 32;
}
}
default:
;
}
ptr++;
}
return (str);
}
