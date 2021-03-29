#include "holberton.h"

/**
 * read_textfile - reads a text file, prints to the standard output.
 * @filename: pointer to the file name
 * @letters: is the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fdes;
char *buffer;
ssize_t f_rd = 0, f_wr = 0;
if (filename == NULL)
return (0);
fdes = open(filename, O_RDONLY);
if (fdes == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
f_rd = read(fdes, buffer, letters);
if (f_rd == -1)
{
free(buffer);
return (0);
}
f_wr = write(STDOUT_FILENO, buffer, f_rd);
if (f_wr == -1)
{
free(buffer);
return (0);
}
close(fdes);
free(buffer);
return (f_wr);
}
