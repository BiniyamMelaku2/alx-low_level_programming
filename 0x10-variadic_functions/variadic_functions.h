#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct struct_formats - definition for format types
 * @ch: int, float, char or string type
 * @func: format function
 * opt_formats: type definition for a new type
 */
typedef struct struct_formats
{
char *ch;
void (*func)(va_list);
} opt_formats;

void print_char(va_list va_arg_lst);
void print_int(va_list va_arg_lst);
void print_float(va_list va_arg_lst);
void print_string(va_list va_arg_lst);

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
