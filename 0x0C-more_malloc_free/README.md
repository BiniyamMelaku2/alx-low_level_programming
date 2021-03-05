# 0x0C. C - More malloc, free
  Foundations - Low-level programming & Algorithm ― Hatching out 
 
## 0-malloc_checked.c
   * a function that allocates memory using malloc. Returns a pointer to the allocated memory. if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
   >  gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-malloc_checked.c -o a | ./a | echo $?
   
## 1-string_nconcat.c
   * a function that concatenates two strings.
   > gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-string_nconcat.c -o b | ./b

## 2-calloc.c

   * a function that allocates memory for an array, using malloc. The memory is set to zero If nmemb or size is 0, then _calloc returns NULL
If malloc fails, then _calloc returns NULL. FYI: The standard library provides a different function: calloc. Run man calloc to learn more.
   > gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-calloc.c -o c | ./c
    
## 3-array_range.c
   *  a function that creates an array of integers. Return: the pointer to the newly created array
   > gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-array_range.c -o d | ./d
 
## 100-realloc.c
   * a function that reallocates a memory block using malloc and free. FYI: The standard library provides a different function: realloc. Run man realloc to learn more.
   > gcc -Wall -pedantic -Werror -Wextra 100-main.c 100-realloc.c -o e | ./e
 
## 101-mul.c
    *  a program that multiplies two positive infinite numbers in string form.
   > gcc -Wall -pedantic -Werror -Wextra 101-mul.c _putchar.c -o mul
