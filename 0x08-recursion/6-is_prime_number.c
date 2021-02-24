#include "holberton.h"

/**
* checkprime - ckeck if divisor exists
* @value: divisor to be checked
* @num: number to be checked
* Return: 1 for prime 0 not prime
*/


int checkprime(int num, int value)
{
if (num < value)
{
return (0);
}
else if ((num % value) == 0)
{
return (1 + checkprime(num, value + 1));
}
else
{
return (0 + checkprime(num, value + 1));
}
}

/**
* is_prime_number - check if prime number
* @n: number to be checked
* Return: 1 for prime 0 not prime
*/

int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
else if (checkprime(n, 1) == 2)
{
return (1);
}
else
{
return (0);
}
}
