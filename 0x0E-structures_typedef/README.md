# 0x0E. C - Structures, typedef
  Foundations - Low-level programming & Algorithm ― Hatching out

  ## dog.h
     * Define a new type struct dog with the following elements:
       name, type = char *   \
       age, type = float     \
       owner, type = char *  \
     > gcc -Wall -pedantic -Werror -Wextra 0-main.c -o a | .\a

  ## 1-init_dog.c
     * a function that initialize a variable of type struct dog
     > gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-init_dog.c -o b | ./b

  ## 2-print_dog.c
     * a function that prints a struct dog
     > gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-print_dog.c -o c | ./c

  ## dog.h
     * Define a new type dog_t as a new name for the type struct dog.
     > gcc -Wall -pedantic -Werror -Wextra 3-main.c -o d | ./d

  ## 4-new_dog.c
     * a function that creates a new dog.
     > gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-new_dog.c -o e | ./e

  ## 5-free_dog.c
     * a function that frees dogs. frees malloced memory of struct dog type
     > gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-free_dog.c 4-new_dog.c -o f | valgrind ./f
  


