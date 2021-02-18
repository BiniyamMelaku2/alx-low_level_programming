#include "holberton.h"

/**
* string_toupper - changes all lowercase to uppercase
* @str: char array pointer
* Return: char pointer
*/
char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
if (*ptr > 96 && *ptr < 123)
{
*ptr -= 32;
}
ptr++;
}
return (str);
}
