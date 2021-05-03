#0x18. C - Dynamic libraries
 Foundations - Low-level programming & Algorithm ― Hatching out

command makes a bunch of .o files from each .c file 

> gcc -c -fPIC *.c

to put together those objects files into one library

> gcc -shared -o liball.so *.o
> gcc -shared -Wl,-soname,libtools.so -o libtools.so *.o   | create the library named
> gcc -shared -Wl,-soname,liball.so -o liball.so *.o  

> gcc -shared -Wl,-soname,libtools.so -o libtools.so *.o

> gcc -shared -Wl,-soname,100-operations.so -o 100-operations.so *.o 


verify that you did it

> nm -D liball.so  | to find out what functions a library has
> ldd libtools.so  | To list the dependencies of a library,

=> How to use it compile the library with your main.c file to link it and use it 
add the location of your library files into the environmental variable

> export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
> gcc -L . 0-main.c -l all -o example

to get the functionality in other programs compile as 
> gcc our_sources.c -L. -ltools -o resulted_program
