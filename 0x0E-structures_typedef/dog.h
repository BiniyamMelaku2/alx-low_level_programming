#ifndef MACRO_STRUCT_DOG_H
#define MACRO_STRUCT_DOG_H
#define dog_t struct dog
/**
 * struct dog - struct type definition
 * @name: name type char member
 * @age: age type float member
 * @owner: owner type char member
 */
struct dog
{
char *name;
float age;
char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
