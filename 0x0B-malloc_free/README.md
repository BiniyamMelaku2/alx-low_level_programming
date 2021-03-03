# 0x0B. C - malloc, free
 Foundations - Low-level programming & Algorithm ― Hatching out

## 0-create_array.c
   *  a function that creates an array of chars, and initializes it with a specific char.
   > gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-create_array.c -o a \n
   > ./a
   
## 1-strdup.c
   * a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
   * FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.
   > gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-strdup.c -o s \n
   > ./s
   
## 2-str_concat.c
   * a function that concatenates two strings.      
   > gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-str_concat.c -o c \n
   > ./c | cat -e
   
## 3-alloc_grid.c
   * a function that returns a pointer to a 2 dimensional array of integers.   
   > gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-alloc_grid.c -o g \n
   > ./g
   
## 4-free_grid.c
   * a function that frees a 2 dimensional grid previously created by your alloc_grid function.   
   > gcc -Wall -pedantic -Werror -Wextra 4-main.c 3-alloc_grid.c 4-free_grid.c -o f \n
   > ./f
   
## 5-argstostr.c
   * a function that concatenates all the arguments of your program.   
   > gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-argstostr.c -o args \n
   > ./args I will "show you" how great I am
   
## 100-strtow.c
   * a function that splits a string into words.   
   > gcc -Wall -pedantic -Werror -Wextra 100-main.c 100-strtow.c -o strtow \n
   > ./strtow | cat -e
