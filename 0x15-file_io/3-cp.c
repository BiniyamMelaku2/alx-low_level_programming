#include "holberton.h"

/**
 * main - copies the content of a file to another file.
 * @ac: number of passed arguments
 * @av: an array of string arguments
 * Return: int value for exit errors
 */
int main(int ac, char **av)
{
int fdes1, fdes2, stat1, stat2;
char buffer[BUF_SIZE];
mode_t w_mode;
w_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

if (ac != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
fdes1 = open(av[1], O_RDONLY);
if (fdes1 == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
fdes2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, w_mode);
if (fdes2 == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
do {
stat1 = read(fdes1, buffer, BUF_SIZE);
if (stat1 == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
if (stat1 > 0)
{
stat2 = write(fdes2, buffer, stat1);
if (stat2 == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
}
} while (stat1 > 0);
if (close(fdes1) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdes1), exit(100);
if (close(fdes2) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdes2), exit(100);
return (0);
}
