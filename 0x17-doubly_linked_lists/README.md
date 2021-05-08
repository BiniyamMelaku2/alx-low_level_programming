# 0x17. C - Doubly linked lists
 Foundations - Low-level programming & Algorithm ― Hatching out

## 0-print_dlistint.c   | 0. Print list |
  Write a function that prints all the elements of a dlistint_t list.
  * Prototype: [ size_t print_dlistint(const dlistint_t *h); ]
  * Return: the number of nodes
  * Format: see example
  > .gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_dlistint.c -o a | ./a
     
## 1-dlistint_len.c | 1. List length |
  Write a function that returns the number of elements in a linked dlistint_t list.
  * Prototype: [ size_t dlistint_len(const dlistint_t *h); ]
  > gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-dlistint_len.c -o b | ./b
  
## 2-add_dnodeint.c   | 2. Add node |
  Write a function that adds a new node at the beginning of a dlistint_t list.
  * Prototype: [ dlistint_t *add_dnodeint(dlistint_t **head, const int n); ]
  * Return: the address of the new element, or NULL if it failed
  > gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c | ./c
  
## 3-add_dnodeint_end.c   | 3. Add node at the end |
  Write a function that adds a new node at the end of a dlistint_t list.
  * Prototype: dlistint_t [ *add_dnodeint_end(dlistint_t **head, const int n); ]
  * Return: the address of the new element, or NULL if it failed
  > gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d | ./d
  
## 4-free_dlistint.c   | 4. Free list |
  Write a function that free a dlistint_t list.
  * Prototype: [ void free_dlistint(dlistint_t *head); ]
  > gcc -Wall -pedantic -Werror -Wextra 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e | ./e

## 5-get_dnodeint.c   | 5. Get node at index |
  Write a function that returns the nth node of a dlistint_t linked list.
  * Prototype: dlistint_t [ *get_dnodeint_at_index(dlistint_t *head, unsigned int index); ]
  * where index is the index of the node, starting from 0
  * if the node does not exist, return NULL
  > gcc -Wall -pedantic -Werror -Wextra 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c -o h | ./h


## 6-sum_dlistint.c   | 6. Sum list |
  Write a function that returns the sum of all the data (n) of a dlistint_t linked list.
  * Prototype: [ int sum_dlistint(dlistint_t *head); ]
  * if the list is empty, return 0
  > gcc -Wall -pedantic -Werror -Wextra 6-main.c 3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c -o i | ./i


## 7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.   | 7. Insert at index |
  Write a function that inserts a new node at a given position.
  * Prototype: [ dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n); ]
  * where idx is the index of the list where the new node should be added. Index starts at 0
  * Returns: the address of the new node, or NULL if it failed
  * if it is not possible to add the new node at index idx, do not add the new node and return NULL
  * Your files 2-add_dnodeint.c and 3-add_dnodeint_end.c will be compiled during the correction
  > gcc -Wall -pedantic -Werror -Wextra 7-main.c 2-add_dnodeint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c -o j | ./j

## 8-delete_dnodeint.c   | 8. Delete at index |
  Write a function that deletes the node at index index of a dlistint_t linked list.
  * Prototype: [ int delete_dnodeint_at_index(dlistint_t **head, unsigned int index); ]
  * where index is the index of the node that should be deleted. Index starts at 0
  * Returns: 1 if it succeeded, -1 if it failed
  > gcc -Wall -pedantic -Werror -Wextra 8-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 8-delete_dnodeint.c -o k | ./k
  
## 100-password   | 9. Crackme4 |
  Find the password for crackme4.
  * Save the password in the file 100-password
  * Your file should contain the exact password, no new line, no extra space
  * Hint: The program prints “OK” when the password is correct
  
## 102-result   | 10. Palindromes |
  WA palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
  * Find the largest palindrome made from the product of two 3-digit numbers.
  * Save the result in the file 102-result
  * Your file should contain the exact result, no new line, no extra space

## 11-multiply_list_map.py   | 11. crackme5 |
  Write a keygen for crackme5.
  * Usage of the crackme: ./crackme5 username key
  * The crackme will segfault if you do not enter the correct key for the user
  * Usage for your keygen: ./keygen5 username
  * Your keygen should print a valid key for the username
  > gcc -Wall -pedantic -Werror -Wextra 103-keygen.c -o keygen5 | ./keygen5 julien`

