#include <stdio.h>
#include <stdlib.h>
/**
* main - prints four numbers unique combination
* Return: 0 no Error
*/
int main(void)
{
int ch1 = 48;
int ch2 = 48;
int ch3 = 48;
int ch4 = 48;
for (ch1 = 48 ; ch1 < 58 ; ch1++)
{
for (ch2 = 48 ; ch2 < 58 ; ch2++)
{
for (ch3 = ch1 ; ch3 < 58; ch3++)
{
if (ch3 > ch1)
ch4 = 48;
else
ch4 = ch2;
while (ch4 < 58)
{
if (ch4 == ch2 && ch3 == ch1)
goto lbel;
putchar(ch1);
putchar(ch2);
putchar(' ');
putchar(ch3);
putchar(ch4);
if (ch1 == 57 && ch2 == 56 && ch3 == 57 && ch4 == 57)
break;
putchar(',');
putchar(' ');
lbel:
ch4++;
}
}
}
}
putchar(10);
return (0);
}
