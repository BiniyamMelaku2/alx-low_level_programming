#include <stdio.h>
/**
* main - prints the alphabet in lowercase
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
putchar(10);
return (0);
}
