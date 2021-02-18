#include "holberton.h"

/**
* leet - encodes a string into 1337
* @str: string to be encoded
* Return: char array
*/
char *leet(char *str)
{
int count = 0;
char *ptr = str;
int lettersAs[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
char encode[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

while (*ptr != '\0')
{
for (count = 0; count < 10; count++)
{
if (*ptr == lettersAs[count])
{
*ptr = encode[count];
}
}
ptr++;
}
return (str);
}
