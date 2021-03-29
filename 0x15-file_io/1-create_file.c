#include "holberton.h"

/**
 * create_file -  function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fdes, rdstate, c;
if (filename == NULL)
return (-1);
fdes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fdes == -1)
return (-1);
if (text_content)
{
for (c = 0; text_content[c] != '\0'; c++)
;
rdstate = write(fdes, text_content, c);
if (rdstate == -1)
return (-1);
}
close(fdes);
return (1);
}
