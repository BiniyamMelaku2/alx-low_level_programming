#include "holberton.h"

/**
* rot13 - encodes a string into rot13
* @str: string to be encoded
* Return: char array
*/
char *rot13(char *str)
{
int count = 0;
char *ptr = str;
char letters[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char encode[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

while (*ptr != '\0')
{
for (count = 0; count < 52; count++)
{
if (*ptr == letters[count])
{
*ptr = encode[count];
break;
}
}
ptr++;
}
return (str);
}
