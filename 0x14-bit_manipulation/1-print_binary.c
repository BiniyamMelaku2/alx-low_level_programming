#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
_putchar((n & 1) + '0');
}
