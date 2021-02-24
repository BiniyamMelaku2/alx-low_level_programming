#include "holberton.h"
#include <stdio.h>

/**
* _pow_recursion - returns x to the power of y
* @x: base numer
* @y: power number
* Return: type int
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
