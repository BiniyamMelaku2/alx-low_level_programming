#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
* main - Print to stderr
* Return: 1
* write() function to write nbytes from buffer
*/

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
