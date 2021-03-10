#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: pointer to the name string
 * @f: pointner to the function
 */
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
