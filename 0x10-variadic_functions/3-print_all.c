#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
void print_char(va_list va_arg_lst);
void print_int(va_list va_arg_lst);
void print_float(va_list va_arg_lst);
void print_string(va_list va_arg_lst);
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
 * @va_arg_lst: - value to be printed
 */
void print_char(va_list va_arg_lst)
{
printf("%c", va_arg(va_arg_lst, int));
}
/**
 * print_int - prints int value
 * @va_arg_lst: - value to be printed
 */
void print_int(va_list va_arg_lst)
{
printf("%d", va_arg(va_arg_lst, int));
}
/**
 * print_float - prints float value
 * @va_arg_lst: - value to be printed
 */
void print_float(va_list va_arg_lst)
{
printf("%f", va_arg(va_arg_lst, double));
}
/**
 * print_string - prints string value
 * @va_arg_lst: - value to be printed
 */
void print_string(va_list va_arg_lst)
{
char *str;
str = va_arg(va_arg_lst, char*);
if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}
