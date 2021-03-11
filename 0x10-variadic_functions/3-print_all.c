#include "variadic_functions.h"
void print_char(va_list valst);
void print_int(va_list valst);
void print_float(va_list valst);
void print_string(va_list valst);
/**
 * print_all -  prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
char *sep = "";
int c = 0, i;
va_list valist;
opt_formats op_format[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string},
{NULL, NULL}
};
va_start(valist, format);
while (format && format[c])
{
i = 0;
while (op_format[i].func)
{
if (*op_format[c].ch == format[i])
{
printf("%s", sep);
op_format[c].func(valist);
sep = ", ";
break;
}
i++;
}
c++;
}
printf("\n");
va_end(valist);
}
/**
 * print_char - prints char value
 * @valst: - value to be printed
 */
void print_char(va_list valst)
{
printf("%c", va_arg(valst, int));
}
/**
 * print_int - prints int value
 * @valst: - value to be printed
 */
void print_int(va_list valst)
{
printf("%d", va_arg(valst, int));
}
/**
 * print_float - prints float value
 * @valst: - value to be printed
 */
void print_float(va_list valst)
{
printf("%f", va_arg(valst, double));
}
/**
 * print_string - prints string value
 * @valst: - value to be printed
 */
void print_string(va_list valst)
{
char *str;
str = va_arg(valst, char*);
if (str)
printf("%s", str);
else
printf("(nil)");
}
