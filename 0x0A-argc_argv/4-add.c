#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - program adds number of arguments
* @argc: size of argv array
* @argv: an array of command line argument
* Return: 0 NoError
*/

int main(int argc, char *argv[])
{
int c, num = 0;
char *ptr;

for (c = 1; c < argc; c++)
{
if (*(argv[c]) == '0')
{
continue;
}
if (!atoi(argv[c]))
{
printf("Error\n");
return (1);
}

strtol(argv[c], &ptr, 10);
while (*ptr)
{
if (*ptr < '0' || *ptr > '9')
{
printf("Error\n");
return (1);
}
ptr++;
}

}

for (c = 1; c < argc; c++)
{
num += atoi(argv[c]);
}
printf("%d\n", num);
return (0);
}
