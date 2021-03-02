#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * count_word - counts number of words
 * @strg: string with words in it
 * Return: number of words
 **/
int count_word(char *strg)
{
int ct_word = 0, ct;
for (ct = 0; strg[ct]; ct++)
{
if (strg[ct] == ' ')
{
if ((strg[ct + 1] != ' ') && (strg[ct + 1] != '\0'))
ct_word++;
}
else if (ct == 0)
ct_word++;
}
ct_word++;
return (ct_word);
}

/**
 * strtow - splits a string into words
 * @str: an array of strings
 * Return: returns a pointer to an array
 */
char **strtow(char *str)
{
char **sz_word;
int c, i = 0, j, k, ln_word = 0, ct_word = 0;
if (str == NULL || *str == '\0')
return (NULL);
ct_word = count_word(str);
if (ct_word == 1)
return (NULL);
sz_word = (char **) malloc(ct_word *sizeof(char *));
if (sz_word == NULL)
return (NULL);
sz_word[ct_word - 1] = NULL;
while (str[i])
{
if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
{
for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
;
j++;
sz_word[ln_word] = (char *)malloc(j *sizeof(char));
j--;
if (sz_word[ln_word] == NULL)
{
for (c = 0; c < ln_word; c++)
free(sz_word[c]);
free(sz_word[ct_word - 1]);
free(sz_word);
return (NULL);
}
for (k = 0; k < j; k++)
sz_word[ln_word][k] = str[i + k];
sz_word[ln_word][k] = '\0';
ln_word++;
i += j;
}
else
i++;
}
return (sz_word);
}
