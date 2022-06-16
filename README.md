# sorting_algorithms

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/248/willy-wonka.png)

## Resources

- [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
- [Big O notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
- [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
- [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg&ab_channel=TimoBingmann) (WARNING: _The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms_)

## General

- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate  the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

## Requirements

- Allowed editors: _`vi`_, _`vim`_, _`emacs`_
- All your files will be compiled on Ubuntu 20.04 LTS using _`gcc`_, using the options _`-Wall -Werror -Wextra -pedantic -std=gnu89`_
- All your files should end with a new line
- A _`README.md`_ file, at the root of the folder of the project, is mandatory
-  Your code should use the _`Betty`_ style. It will be checked using [_`betty-style.pl`_](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [_`betty-doc.pl`_](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
- In the following examples, the _`main.c`_ files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own _main.c_ files at compilation. Our _`main.c`_ files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called _`sort.h`_
- Don’t forget to push your header file
- All your header files should be include guarded
- A list/array does not need to be sorted if its size is less than 2.

## Description of each file:

| **File** | **Description** | **opcional** | **opcional** | **otro mas** |
| ------- | ------- | ------- | ------- | ------ |
| [0-bubble_sort.c]() | Write a function that sorts an array of integers in ascending order using the [Bubble sort](https://en.wikipedia.org/wiki/Bubble_sort) algorithm | Prototype: _`void bubble_sort(int *array, size_t size);`_   | You’re expected to print the _`array`_ after each time you swap two elements (See example below) | [video](https://youtu.be/lyZQPjUT5B4)
| [0-O]() | Write in the file _`0-O`_, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line: | in the best case  /   in the average case / in the worst case |

```
alex@/tmp/sort$ cat 0-main.c 
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble
alex@/tmp/sort$ ./bubble
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 71, 13, 52, 99, 96, 73, 86, 7
19, 48, 71, 13, 52, 96, 99, 73, 86, 7
19, 48, 71, 13, 52, 96, 73, 99, 86, 7
19, 48, 71, 13, 52, 96, 73, 86, 99, 7
19, 48, 71, 13, 52, 96, 73, 86, 7, 99
19, 48, 13, 71, 52, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 73, 96, 86, 7, 99
19, 48, 13, 52, 71, 73, 86, 96, 7, 99
19, 48, 13, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$ 
```