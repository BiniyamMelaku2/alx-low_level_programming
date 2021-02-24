#include "holberton.h"

/**
* squareroot - finds natural square root
* @num: number to root
* @result: begin search from 1
* Return: square root
*/

int squareroot(int num, int result)
{
if (result > num / 2)
{
return (-1);
}
else if (result * result == num)
{
return (result);
}
else
{
return (squareroot(num, result + 1));
}
}


/**
* _sqrt_recursion - returns the natural square root
* @n: number to root
* Return: type int
*/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n < 2)
{
return (1);
}
else
{
return (squareroot(n, 1));
}
}
