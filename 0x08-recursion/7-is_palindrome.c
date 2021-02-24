#include "holberton.h"

/**
* len_string - find string length
* @stg: string value
* Return: string length
*/

int len_string(char *stg)
{
if (*stg == '\0')
{
return (0);
}
stg++;
return (1 + (len_string(stg)));
}

/**
* check_palindrome - checks case palindrome
* @start: starting char of string
* @end: ending char of string
* Return: 0 palindrome 1 not palindrome
*/

int check_palindrome(char *start, char *end)
{
if (start >= end)
{
return (1);
}
else if (*start == *end)
{
return (check_palindrome(start + 1, end - 1));
}
else
{
return (0);
}
}

/**
* is_palindrome - check string is a palindrome
* @s: string value to be checked
* Return: 1 if palindrome or 0 not palindrome
*/

int is_palindrome(char *s)
{
int len = len_string(s);
return (check_palindrome(s, (s + len - 1)));
}
