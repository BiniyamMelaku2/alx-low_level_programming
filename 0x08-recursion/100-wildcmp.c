#include "holberton.h"
#include <stdio.h>

/**
* wildcmp - compares two strings
* @s1: first string for comparison
* @s2: second string to compare to
* Return: 1 identical 0 otherwise
*/

int wildcmp(char *s1, char *s2)
{
if (!*s1 && !*s2)
{
return (1);
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
else if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
{
return (1);
}
else if (*s2 == '*' && *(s1 + 1) != '\0' && !*s2)
{
return (0);
}
else
{
return (0);
}
}
