#include <stdio.h>

/**
* main - largest prime of 612852475143
*
* Return: 0 NoError
*/

int main(void)
{
long prime, num = 612852475143;
for (prime = 2; num > prime; prime++)
while (num % prime == 0)
{
num /= prime;
}
printf("%ld\n", num);
return (0);
}
