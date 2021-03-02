#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code for Holberton School students.
 * @s1: holds value for string1
 * @s2: holds value for string2
 * Return: pointer to stored string
 */
char *str_concat(char *s1, char *s2)
{
char *ptr;
unsigned int index = 0, lens1 = 0, lens2 = 0;
if (s1 == NULL)
ptr = "";
if (s2 == NULL)
s2 = "";
for (lens1 = 0 ; s1[lens1]; lens1++)
;
for (lens2 = 0 ; s2[lens2]; lens2++)
;
ptr = malloc(sizeof(char) * (lens1 + lens2));
if (ptr == NULL)
return (NULL);
while (*s1)
{
ptr[index] = *s1++;
index++;
}
while (*s2)
{
ptr[index] = *s2++;
index++;
}
ptr[index] = '\0';

return (ptr);
}
