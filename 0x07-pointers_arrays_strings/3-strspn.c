#include "holberton.h"

/**
* _strspn - gets the length of a prefix
* @s:  found substring
* @accept: searched string
* Return: number of byte segments
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int len_string, i, max = 0;
char *ptr = s;
char *subsg = accept;
for (len_string = 0; *s++ != '\0'; len_string++)
;
while (*subsg != '\0')
{
for (i = 0; i < len_string; i++)
{
if (*subsg == ptr[i])
{
if (i > max)
{
max = i + 1;
}
break;
}
}
subsg++;
}
return (max);
}
