# 0x09. C - Static libraries
 Foundations - Low-level programming & Algorithm ― Hatching out

## libholberton.a, holberton.h
   * Create the static library libholberton.a containing all the functions declared in the header file holberton.h
   > nm libholberton.a  
   > gcc main.c -L. -lholberton -o quote
   > ./quote 
   
## create_static_lib.sh
   * a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory   
   > ls *.c
   > /create_static_lib.sh
   > ls *.a
   > ar -t liball.a 
 
                 # Notes 

=> add library to list of object files linked
   > cc main.o -L. -lutil -o prog
   ? will create a program 'prog' using object file 'main.o' using any symbols require from static library 'libutils.a' 
   ? -L  : libraries might b found in the given directory

=> create a shared library
   > cc -fPIC -c util_file.c
   > cc -fPIC -c util_net.c
   > cc -fPIC -c util_math.c
   > cc -shared libutil.so util_file.o util_net.o util_math.o
   ? -G : shared library -shared flag
  
=> to compile only to object code 
   > gcc -c 0-isupper.c 0-memset.c 0-strcat.c 1-isdigit.c 1-memcpy.c 1-strncat.c 2-strchr.c 2-strlen.c 2-strncpy.c 3-islower.c 3-puts.c 3-strcmp.c 
   > gcc -c 4-strpbrk.c 5-strstr.c 6-abs.c 9-strcpy.c 100-atoi.c _putchar.c 3-strspn.c 4-isalpha.c

=> to create static library to modify object files 
   > ar rc libholberton.a *.o

=> to create or update the index
   > ranlib libholberton.a
