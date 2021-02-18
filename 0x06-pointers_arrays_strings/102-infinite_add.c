#include "holberton.h"

int addi(char *n2, char *r, int, int, int, int);

/**
* infinite_add - adds two numbers
* @n1: the number to be added
* @n2: the number to be added
* @r: the buffer to store the result
* @size_r: is the buffer size
* Return: char array
*/


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len_n1, len_n2;
int i, max, check;

for (len_n1 = 0; *(n1 + len_n1); len_n1++)
;
for (len_n2 = 0; *(n2 + len_n2); len_n2++)
;

if (++len_n1 > size_r || ++len_n2 > size_r)
{
return (0);
}
if (len_n1 > len_n2)
{
max = len_n1;
}
else
{
max = len_n2;
}
len_n1 -= max;
len_n2 -= max;

for (i = 0; i < max - 1; i++)
{
if (len_n1 >= 0)
{
*(r + i) = *(n1 + len_n1);
}
*(r + i + 1) = '\0';
if (len_n2 >= 0)
{
check = addi(n2, r, size_r, i, len_n2, max);
if (check == 0)
{
return (0);
}
if (check < 0)
{
i++;
max++;
}
}
len_n1++;
len_n2++;
}
return (r);
}

/**
* addi - adds second string
* @i: iteration
* @n2: the number to be added
* @r: the buffer to store the result
* @size_r: is the buffer size
* @len_n2: length of n2 string
* @max: maximum string length
* Return: 0 string size big, -1 buffer size, 1 otherwise
*/



int addi(char *n2, char *r, int size_r, int i, int len_n2, int max)
{
int n, temp;
n = i;

*(r + i) += *(n2 + len_n2) -'0';

while (*(r + n) > '0')
{
*(r + n) -= 10;
if (n > 0)
{
n--;
*(r + n) += 1;
}
else
{
if (max + 1 > size_r)
{
return (0);
}
*(r + max) = '\0';
temp = *r;
*r = '1';

for (n = 1; n <= i + 1; n++)
{
*(r + n) = temp;
if (*(r + n + 1) != '\0')
temp = *(r + n + 1);
}
*(r + max) = '\0';
return (-1);
}
}
return (1);
}
