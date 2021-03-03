#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - copies string returns pointer
 * @str: string value to copy
 * Return: char pointer to memory
 */

char *_strdup(char *str)
{
char *ptr = str;
unsigned int index = 0, lenstr = 0;

if (str == NULL)
{
return (NULL);
}
else
{
for (lenstr = 0 ; str[lenstr]; lenstr++)
;
ptr = malloc(sizeof(char) * lenstr + 1);
if (ptr == NULL)
{
return (NULL);
}
else
{
while (index < lenstr)
{
ptr[index] = str[index];
index++;
}
}
}
return (ptr);
}
