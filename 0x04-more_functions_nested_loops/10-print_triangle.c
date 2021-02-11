#include "holberton.h"
/**
* print_triangle - prints a triangle
* @size: argument passes triangle size
* Return: 0 no Error
*/
void print_triangle(int size)
{
int count, width;
width = size;
for (count = 1; count <= size ; count++)
{
width = size;
for (width = size ; width - count > 0 ; width--)
{
_putchar(' ');
}
while (width--)
{
_putchar(35);
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
