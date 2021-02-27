#include "holberton.h"
#include <stdio.h>

/**
* main - program entry point
* @argc: size of argv array
* @argv: an array of command line argument
* Return: 0 NoError
*/

int main(int argc, char *argv[])
{
int c;
for (c = 0; c < argc; c++)
{
printf("%s\n", argv[c]);
}
return (0);
}
