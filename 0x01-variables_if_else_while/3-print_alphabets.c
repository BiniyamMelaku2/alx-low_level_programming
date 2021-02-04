#include <stdio.h>
/**
* main - prints the alphabets
* Return: 0 no Error
*/
int main(void)
{
int ch = 97;
while (ch < 123)
{
putchar(ch);
ch++;
}
for (ch = 65; ch < 91 ; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
