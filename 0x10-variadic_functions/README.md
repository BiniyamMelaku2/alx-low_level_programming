# 0x10. C - Variadic functions
   Foundations - Low-level programming & Algorithm ― Hatching out
   
## 0-sum_them_all.c
  Write a function that returns the sum of all its parameters.
 * Prototype: int sum_them_all(const unsigned int n, ...);
 * If n == 0, return 0   
 > gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-sum_them_all.c -o a | ./a
 
## 1-print_numbers.c
  Write a function that prints numbers, followed by a new line.
 * Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
 * where separator is the string to be printed between numbers
 * and n is the number of integers passed to the function
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * Print a new line at the end of your function 
 > gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-print_numbers.c -o b | ./b
 
## 2-print_strings.c
  Write a function that prints strings, followed by a new line.
 * Prototype: void print_strings(const char *separator, const unsigned int n, ...);
 * where separator is the string to be printed between the strings
 * and n is the number of strings passed to the function
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function 
 > gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-print_strings.c -o c | ./c
 
## 3-print_all.c 
  Write a function that prints anything.
 * Prototype: void print_all(const char * const format, ...);
 * where format is a list of types of arguments passed to the function
      c: char
      i: integer
      f: float
      s: char * (if the string is NULL, print (nil) instead any other char should be ignored see example
 * You are not allowed to use for, goto, ternary operator, else, do ... while
 * You can use a maximum of
      2 while loops
      2 if
 * You can declare a maximum of 9 variables
 * You are allowed to use printf
 * Print a new line at the end of your function 
 > gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-print_all.c -o d | ./d
 
## 100-hello_holberton.asm
  Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
 * You are only allowed to use the system call write (use int or syscall, not a call)
 * Your program will be compiled using nasm and gcc (as follows) 
 > nasm -f elf64 100-hello_holberton.asm && gcc 100-hello_holberton.o -o hello | ./hello


