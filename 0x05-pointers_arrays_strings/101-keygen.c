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

char alphnum[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
char password[100];

srand(time(NULL));
sum = 0;
count = 0;

while (sum < (2772 - 122))
{
randm = rand() % 62;
password[count] = alphnum[randm];
sum += password[count];
count++;
}

randm = 2772 - sum;
password[count] = randm;

printf("%s\n", password);
return (0);
}
