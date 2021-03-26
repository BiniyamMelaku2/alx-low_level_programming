# 0x12. C - Singly linked lists
 Foundations - Low-level programming & Algorithm ― Data structures and Algorithms
 
## 0-print_list.c
  Write a function that prints all the elements of a list_t list.
 * Prototype: size_t print_list(const list_t *h);
 * Return: the number of nodes
 * Format: see example
 * If str is NULL, print [0] (nil)
 * You are allowed to use printf
 > gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_list.c -o a | ./a
 
## 1-list_len.c
  Write a function that returns the number of elements in a linked list_t list.
 * Prototype: size_t list_len(const list_t *h);
 > gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-list_len.c -o b | ./b
 
## 2-add_node.c
  Write a function that adds a new node at the beginning of a list_t list.
 * Prototype: list_t *add_node(list_t **head, const char *str);
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 * You are allowed to use strdup
 > gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-add_node.c 0-print_list.c -o c | ./c
 
## 3-add_node_end.c
  Write a function that adds a new node at the end of a list_t list.
 * Prototype: list_t *add_node_end(list_t **head, const char *str);
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 * You are allowed to use strdup
 > gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-add_node_end.c 0-print_list.c -o d | ./d
 
## 4-free_list.c
  Write a function that frees a list_t list.
 * Prototype: void free_list(list_t *head);
 > gcc -Wall -pedantic -Werror -Wextra 4-main.c 3-add_nodeint_end.c 0-print_list.c 4-free_list.c -o e | valgrind ./e 
 
## 100-first.c
  Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
 * You are allowed to use the printf function
 > gcc -Wall -pedantic -Werror -Wextra 100-main.c 100-first.c -o first | ./first
 
## 6-pop_listint.c
  Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
 * You are only allowed to use the printf function
 * You are not allowed to use interrupts
 * Your program will be compiled using nasm and gcc:
 > nasm -f elf64 101-hello_holberton.asm && gcc 101-hello_holberton.o -o hello | ./hello 
