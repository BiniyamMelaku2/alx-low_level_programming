#include <stdio.h>
/**
* main - prints two numbers unique combination
* Return: 0 no Error
*/
int main(void)
{
int ch1 = 48;
int ch2 = 49;
for (ch1 = 48 ; ch1 < 58 ; ch1++)
{
for (ch2 = ch1 + 1 ; ch2 < 58; ch2++)
{
putchar(ch1);
putchar(ch2);
if (ch1 == 56 && ch2 == 57)
break;
putchar(',');
putchar(' ');
}
}
putchar(10);
return (0);
}
