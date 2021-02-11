#include "holberton.h"
/**
* print_square - prints a square
* @size: argument passes sqaure size
* Return: 0 no Error
*/
void print_square(int size)
{
int count, width;

for (width = 1; width <= size ; width++)
{
count = size;
while (count)
{
_putchar(35);
count--;
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
