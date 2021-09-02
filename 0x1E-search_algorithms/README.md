# 0x1E. C - Search Algorithms



## Resources
Read or watch:

* [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
* [Space complexity (1)](https://www.geeksforgeeks.org/g-fact-86/)


## Tasks

## [0. Linear search](./0-linear.c)
Write a function that searches for a value in an array of integers using the [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search)

* Prototype : [ int linear_search(int *array, size_t size, int value); ]
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the first index where value is located
* If value is not present in array or if array is NULL, your function must return -1
* Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)
> gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-linear.c -o 0-linear | ./0-linear

## [1. Binary search](./1-binary.c)
Write a function that searches for a value in a sorted array of integers using the [Binary search algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm)

* Prototype : [ int binary_search(int *array, size_t size, int value); ]
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the index where value is located
* You can assume that array will be sorted in ascending order
* You can assume that value won’t appear more than once in array
* If value is not present in array or if array is NULL, your function must return -1
* You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)
> gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-binary.c -o 1-binary | ./1-binary

## [2. Big O #0](./2-O)
What is the time complexity (worst case) of a linear search in an array of size n?

## [3. Big O #1](./3-O)
What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

## [4. Big O #2](./4-O)
What is the time complexity (worst case) of a binary search in an array of size n?

## [5. Big O #3](./5-O)
What is the space complexity (worst case) of a binary search in an array of size n?

## [6. Big O #4](./6-O)
What is the space complexity of this function / algorithm?
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

## [7. Jump search](./100-jump.c)
Write a function that searches for a value in a sorted array of integers using the [Jump search algorithm](https://en.wikipedia.org/wiki/Jump_search)

* Prototype : [ int jump_search(int *array, size_t size, int value); ]
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the first index where value is located
* You can assume that array will be sorted in ascending order
* If value is not present in array or if array is NULL, your function must return -1
* You have to use the square root of the size of the array as the jump step.
* You can use the sqrt() function included in <math.h> (don’t forget to compile with -lm)
* Every time you compare a value in the array to the value you are searching for, you have to print this value (see example)
> gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-jump.c -lm -o 100-jump | ./100-jump 