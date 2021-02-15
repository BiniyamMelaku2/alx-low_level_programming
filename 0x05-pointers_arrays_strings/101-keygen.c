#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - generates random valid passwords
* Return: 0 NoError
*/

int main(void)
{
int randm, count, sum;

srand(time(NULL));

for (count = 0; sum = 2772, sum > 122; count++)
{
randm = (rand() % 125) + 1;
printf("%c", randm);
sum -= randm;
}
printf("%c", sum);
return (0);
}
