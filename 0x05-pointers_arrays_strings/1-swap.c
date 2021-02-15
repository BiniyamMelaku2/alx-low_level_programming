#include "holberton.h"

/**
* swap_int - swaps values in two variables
* @a: *a copies address of variable
* @b: *b copies address of variable
*/
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
