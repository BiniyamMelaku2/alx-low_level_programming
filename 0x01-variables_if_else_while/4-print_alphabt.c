#include <stdio.h>
#include <stdlib.h>
/**
* main - Print all the letters except q and e
* Return: 0 no Error
*/
int main(void)
{
int ch = 97;
while (ch < 123)
{
if (ch == 101 || ch == 113)
{
ch++;
continue;
}
putchar(ch);
ch++;
}
putchar(10);
return (0);
}
