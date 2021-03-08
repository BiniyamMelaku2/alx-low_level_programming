#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
char *_strdup(char *str);

/**
 * new_dog - returns a new struct type dog_t
 * @name: char name member of struct
 * @age: float age member of struct
 * @owner: char owner member of struct
 * Return: Null if error.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_doggy;
my_doggy = malloc(sizeof(dog_t));
if (my_doggy == NULL)
{
return (my_doggy);
}
my_doggy->name = _strdup(name);
my_doggy->owner = _strdup(owner);

if (my_doggy->name == NULL || my_doggy->owner == NULL)
{
free(my_doggy->name);
free(my_doggy->owner);
free(my_doggy);
return (NULL);
}
my_doggy->age = age;
return (my_doggy);
}
/**
 * _strdup - duplicates string
 * @str: takes string input
 * Return: pointer to the duplicated value
 */
char *_strdup(char *str)
{
int c = 0, strlen;
char *dupl;
if (!str)
return (NULL);
for (strlen = 0; str[strlen]; strlen++)
;
dupl = malloc(sizeof(char) * strlen + 1);
if (dupl == NULL)
return (NULL);
for (c = 0; c < strlen; c++)
dupl[c] = str[c];
dupl[c] = '\0';
return (dupl);
}
