#include "holberton.h"
/**
* jack_bauer - prints every minute of the day
*
*/
void jack_bauer(void)
{
int minut1, minut2, hour1, hour2;
for (hour1 = 0 ; hour1 < 2 ; hour1++)
{
for (hour2 = 0 ; hour2 < 10 ; hour2++)
{
for (minut1 = 0 ; minut1 < 6 ; minut1++)
{
for (minut2 = 0 ; minut2 < 10 ; minut2++)
{
_putchar(hour1 + '0');
_putchar(hour2 + '0');
_putchar(':');
_putchar(minut1 + '0');
_putchar(minut2 + '0');
_putchar('\n');
}
}
}
}
hour1 = 2;
for (hour2 = 0 ; hour2 < 4 ; hour2++)
{
for (minut1 = 0 ; minut1 < 6 ; minut1++)
{
for (minut2 = 0 ; minut2 < 10 ; minut2++)
{
_putchar(hour1 + '0');
_putchar(hour2 + '0');
_putchar(':');
_putchar(minut1 + '0');
_putchar(minut2 + '0');
_putchar('\n');
}
}
}
}
