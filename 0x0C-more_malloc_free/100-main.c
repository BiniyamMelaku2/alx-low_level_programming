#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * PrintError - prints error message
 * @str: string holds the error message
 */
void PrintError(char *str)
{
while (*str)
_putchar(*str++);
}
/**
 * CheckNumber - Checks string is valid number
 * @str: string holds the number
 * Return: 0 Noerror
 */

int CheckNumber(char *str)
{
char *ptr;
strtol(str, &ptr, 10);
while (*ptr)
{
if (*ptr < '0' || *ptr > '9')
{
PrintError("Error\n");
exit(98);
}
ptr++;
}
if (*(str) == '0')
{
PrintError("0\n");
exit(0);
}
if (!atoi(str))
{
PrintError("Error\n");
exit(98);
}
return (0);
}

/**
 * main - Entry point for program execution
 * @argc: size of arguments
 * @argv: pointer to the arguments
 * Return: 0 no error
 */

int main(int argc, char *argv[])
{
int a[400], b[400], ans[800] = {0}, i, j, tmp;
char *s1, *s2;
s1 = argv[argc - 2];
s2 = argv[argc - 1];
if (argc != 3)
{
PrintError("Error\n");
exit(98);
}
CheckNumber(s1);
CheckNumber(s2);
int l1 = strlen(s1), l2 = strlen(s2);
for (i = l1 - 1, j = 0; i >= 0; i--, j++)
a[j] = s1[i] - '0';
for (i = l2 - 1, j = 0; i >= 0; i--, j++)
b[j] = s2[i] - '0';
for (i = 0; i < l2; i++)
{
for (j = 0; j < l1; j++)
ans[i + j] += b[i] * a[j];
}
for (i = 0; i < l1 + l2; i++)
{
tmp = ans[i] / 10;
ans[i] = ans[i] % 10;
ans[i + 1] = ans[i + 1] + tmp;
}
for (i = l1 + l2; i >= 0; i--)
{
if (ans[i] > 0)
break;
}
for (; i >= 0; i--)
_putchar(ans[i] + '0');
_putchar('\n');
exit(0);
}
