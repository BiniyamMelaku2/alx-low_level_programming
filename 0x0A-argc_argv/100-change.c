#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - print number of cooins to change
* @argc: size of argv array
* @argv: an array of command line argument
* Return: 0 NoError
*/

int main(int argc, char *argv[])
{
int cents[] = {25, 10, 5, 2, 1};
int count, sum, i;
char *ptr;

if (argc != 2)
{
printf("Error\n");
return (1);
}
sum = strtol(argv[1], &ptr, 10);
count = 0;
if (!*ptr)
{
while (sum > 1)
{
for (i = 0; i < 5; i++)
{
if (sum >= cents[i])
{
count += sum / cents[i];
sum %= cents[i];
}
}
}
if (sum == 1)
{
count++;
}
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", count);
return (0);
}
