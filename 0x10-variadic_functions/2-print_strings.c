#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int c;
char *strptr;
if (n != 0)
{
va_list valist;
va_start(valist, n);
for (c = 0; c < (n - 1); c++)
{
strptr = va_arg(valist, char*);
if (strptr == NULL && separator == NULL)
printf("(nil)");
else if (strptr == NULL && separator != NULL)
printf("(nil)%s", separator);
else if (strptr != NULL && separator == NULL)
printf("%s", strptr);
else if (strptr != NULL && separator != NULL)
printf("%s%s", strptr, separator);
}
strptr = va_arg(valist, char*);
if (strptr != NULL)
printf("%s", strptr);
else if (strptr == NULL)
printf("(nil)");
va_end(valist);
}
printf("\n");
}
