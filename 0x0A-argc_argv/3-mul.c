#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - program multplies two arguments
* @argc: size of argv array
* @argv: an array of command line argument
* Return: 0 NoError
*/

int main(int argc, char *argv[])
{
int num;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
num = atoi(argv[1]);
num *= atoi(argv[2]);
printf("%d\n", num);
return (0);
}
}
