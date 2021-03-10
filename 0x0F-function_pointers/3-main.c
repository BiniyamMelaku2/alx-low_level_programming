#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - operates calc on arguments
 * returns result of operation
 * @argc: size of input arguments
 * @argv: pointer to arguments
 * Return: 0 NoError
 */

int main(int argc, char *argv[])
{
if (argc != 4)
return (0);
int (*fptr)(int, int);
fptr = get_op_func(argv[2]);
if (!get_op_func(argv[2]))
{
printf("Error\n");
exit(99);
}
printf("%d\n", (fptr(atoi(argv[1]), atoi(argv[3]))));
return (0);
}
