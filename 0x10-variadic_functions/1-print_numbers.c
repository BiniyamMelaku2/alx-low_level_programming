#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of arguments passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int c;
va_start(valist, n);
for (c = 0; c < n; c++)
{
printf("%d", va_arg(valist, int));
if ((c < n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(valist);
}
