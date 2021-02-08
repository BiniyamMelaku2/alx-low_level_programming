#include "holberton.h"
/**
* print_alphabet_x10 - prints 10x all alphabets in lowercase
*
*/
void print_alphabet_x10(void)
{
int ch_ASCII, timer;
for (timer = 0 ; timer < 10 ; timer++)
{
for (ch_ASCII = 97 ; ch_ASCII < 123 ; ch_ASCII++)
{
_putchar(ch_ASCII);
}
_putchar('\n');
}
}
