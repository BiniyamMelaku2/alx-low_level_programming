#include "holberton.h"
/**
* print_last_digit - prints last digit
* @num: num argument has value of number
* Return: Last digit of a number
*
*/
int print_last_digit(int num)
{
int last_digit;
last_digit = num % 10;
if (last_digit < 0)
last_digit = -1 * last_digit;
_putchar(last_digit + '0');
return (last_digit);
}
