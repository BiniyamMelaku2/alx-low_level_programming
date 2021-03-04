#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of chars to be concatenated
 * Return: pointer to the result string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int i, ct = 0, lens1, lens2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (lens1 = 0; s1[lens1]; lens1++)
;
for (lens2 = 0; s2[lens2]; lens2++)
;
if (n < lens2)
concat = malloc(lens1 + n + 1);
else
concat = malloc(lens1 + lens2 + 1);
if (concat == NULL)
return (NULL);
for (i = 0; i < lens1; i++)
{
concat[i] = *s1++;
}
while (*s2 && (ct < n))
{
concat[lens1++] = *s2++;
ct++;
if (ct > lens2)
break;
}
concat[lens1] = '\0';
return (concat);
}
