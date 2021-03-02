#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates the argumnets of program
 * @ac: number of argumnets
 * @av: pointer to the arguments array
 * Return: pointer to concatenated arguements
 */
char *argstostr(int ac, char **av)
{
char *ptr;
int index = 0, i, j, count = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
count++;
}
count++;
}

ptr = malloc((count + 1) * (sizeof(char)));

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
ptr[index++] = av[i][j];
}
if (av[i][j] == '\0')
{
ptr[index++] = '\n';
}
}

ptr[index + 1] = '\n';

return (ptr);
}

