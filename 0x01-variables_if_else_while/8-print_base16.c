#include <stdio.h>
/**
* main - prints all base 16 numbers in lowercase
* Return: 0 no Error
*/
int main(void)
{
int num = 48;
int ch = 97;
while (num < 58)
{
putchar(num);
num++;
}
while (ch < 103)
{
putchar(ch);
ch++;
}
putchar(10);
return (0);
}
