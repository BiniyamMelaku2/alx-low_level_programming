#include <stdio.h>
/**
* main - prints three numbers unique combination
* Return: 0 no Error
*/
int main(void)
{
int ch1 = 48;
int ch2 = 49;
int ch3 = 50;
for (ch1 = 48 ; ch1 < 58 ; ch1++)
{
for (ch2 = ch1 +1 ; ch2 < 58; ch2++)
{
for (ch3 = ch2 + 1 ; ch3 < 58; ch3++)
{
putchar(ch1);
putchar(ch2);
putchar(ch3);
if (ch1 == 55 && ch2 == 56 && ch3 == 57)
break;
putchar(',');
putchar(' ');
}
}
}
putchar(10);
return (0);
}
