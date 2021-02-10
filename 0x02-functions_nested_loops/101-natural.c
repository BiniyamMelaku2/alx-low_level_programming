#include <stdio.h>
/**
* main - prints sum of multiples of 3, 5
* Return: 0 NoError
*/

int main(void)
{
int count, sum;
for (count = 1; count <= 1024 ; count++)
{
if ((count % 3 == 0) || (count % 5 == 0))
{
sum += count;
}
}
printf("%d\n", sum);
return (0);
}
