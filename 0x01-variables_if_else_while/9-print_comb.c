#include <stdio.h>
/**
* main - prints all single digit numbers
* Return: 0 no Error
*/
int main(void)
{
int ch = 48;
while (ch < 58)
{
putchar(ch);
if (ch == 57)
break;
putchar(',');
putchar(' ');
ch++;
}
putchar(10);
return (0);
}
