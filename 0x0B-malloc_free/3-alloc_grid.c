#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2d array
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
int **arr2d;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

arr2d = malloc(height * sizeof(int));

if (arr2d)
{
for (i = 0; i < width; i++)
{
arr2d[i] = malloc(sizeof(int) * width);
}
}

if (*arr2d == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
arr2d[i][j] = 0;
}
}
return (arr2d);
}
