#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the struct type
 * @name: pointer to the value for member of struct
 * @age: value to member of struct
 * @owner:  pointer to the value for member of struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
