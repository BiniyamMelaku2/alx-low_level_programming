# 0x0D. C - Preprocessor
  Foundations - Low-level programming & Algorithm ― Hatching out
 
  ## 0-object_like_macro.h
     *  a header file that defines a macro named SIZE as an abbreviation for the token 1024
     > gcc -Wall -pedantic -Werror -Wextra 0-main.c -o a | ./a
  
  ## 1-pi.h
     * a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.
     > gcc -Wall -pedantic -Werror -Wextra 1-main.c -o b | ./b

  ## 2-main.c
     * a program that prints the name of the file it was compiled from, followed by a new line.
     > gcc -Wall -pedantic -Werror -Wextra 2-main.c -o c | ./c
     >> cp 2-main.c 02-main.c | gcc -Wall -pedantic -Werror -Wextra 02-main.c -o cc | ./cc

  ## 3-function_like_macro.h
     * a function-like macro ABS(x) that computes the absolute value of a number x.
     > gcc -Wall -pedantic -Werror -Wextra 3-main.c -o d | ./d

  ## 4-sum.h
     * a function-like macro SUM(x, y) that computes the sum of the numbers x and y.
     > gcc -Wall -pedantic -Werror -Wextra 4-main.c -o e | ./e

  ## 101-preprocessor_abuse.c
     * a program that can print Hello, Holberton, followed by a new line.

