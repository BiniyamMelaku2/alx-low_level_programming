#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int c;
char *strptr;
va_start(valist, n);
for (c = 0; c < n; c++)
{
strptr = va_arg(valist, char*);
if (strptr == NULL)
{
printf("(nil)");
}
printf("%s", strptr);
if ((c < n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(valist);
}
