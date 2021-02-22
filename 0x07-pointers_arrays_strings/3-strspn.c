#include "holberton.h"

/**
* _strspn - gets the length of a prefix
* @s:  found substring
* @accept: searched string
* Return: number of byte segments
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int len, i = 0;

while (s[i] != '\0')
{
for (len = 0; accept[len]; len++)
{
if (s[i] == accept[len])
{
break;
}
}
if (s[i] != accept[len])
{
break;
}
i++;
}
return (i);
}
