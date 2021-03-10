#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: pointer to the name string
 * @f: pointner to the function
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
(*f)(name);
}
}
