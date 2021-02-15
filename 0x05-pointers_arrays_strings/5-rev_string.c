#include "holberton.h"

/**
* rev_string - reverses the string
* @s: copies address to the string
*/
void rev_string(char *s)
{
char temp;
char *p = s;
int count = 0, i;
while (*p)
{
p++;
count++;
}
p--;
for (i = 0; i < (count / 2); i++)
{
temp = *p;
*p = *s;
*s = temp;
s++;
p--;
}
}
