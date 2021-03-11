#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sums all input arguments
 * @n: number of input arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int c;
int sum = 0;
va_list valist;
if (n == 0)
return (0);
va_start(valist, n);
for (c = 0; c < n; c++)
sum += va_arg(valist, int);
va_end(valist);
return (sum);
}
