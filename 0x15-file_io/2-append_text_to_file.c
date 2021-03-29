#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fdes, wrstate, c;
if (filename == NULL)
return (-1);
if (text_content == NULL)
return (1);
fdes = open(filename, O_APPEND | O_WRONLY);
if (fdes == -1)
return (-1);
for (c = 0; text_content[c] != '\0'; c++)
;
wrstate = write(fdes, text_content, c);
if (wrstate == -1)
return (-1);
close(fdes);
return (1);
}
