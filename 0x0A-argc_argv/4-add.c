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
if (argc == 1)
{
printf("%d\n", 0);
return (0);
}

for (c = 1; c < argc; c++)
{
if (!atoi(argv[c]))
{
printf("Error\n");
return (1);
}
}

for (c = 1; c < argc; c++)
{
num += atoi(argv[c]);
}
printf("%d\n", num);
return (0);
}
