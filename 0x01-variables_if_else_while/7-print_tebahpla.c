#include <stdio.h>
/**
* main - prints the lowercase alphabet in reverse
* Return: 0 no Error
*/
int main(void)
{
int ch = 122;
while (ch > 96)
{
putchar(ch);
ch--;
}
putchar(10);
return (0);
}
