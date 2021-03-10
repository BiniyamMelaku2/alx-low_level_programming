#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * main - prints the opcodes of main function
 * @argc: size of the argument
 * @argv: string of arguments
 * Return: 0 NoError
 */
int main(int argc, char *argv[])
{
int c = 0, bytes;
char *ptr;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
if (atoi(argv[1]) < 0)
{
printf("Error\n");
exit(2);
}
bytes = atoi(argv[argc - 1]);
while (c < bytes)
{
ptr = (unsigned char *)*(main + c);
printf("%02x", *ptr & 0xff);
c++;
if (c == bytes)
printf("\n");
else
printf(" ");
}
return (0);
}
