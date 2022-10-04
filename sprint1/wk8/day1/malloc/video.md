## Dynamic memory allocation in C - malloc calloc realloc free
https://www.youtube.com/watch?v=xDVC3wKjS64  

# Dynamic memory allocation
## Automatic allocation
When you declare variables or when you use strings within double quotes, the
program is taking care of all the memory allocation. You do not have to think about
it.
```
int fun(int a)
{
    char s[] = "Hello World\n";
    int ar[3];
    int b;

    [...]
}
```
Dynamic allocation
So far we have used variables, arrays with fixed size. But what happens if you do
not know the size of the array you have to declare and / or if this size depends on
another variable?
Note: remember, you can declare arrays only with a constant.
type variable[constant]; /* works */
int n;
n = 10;
type variable[n]; /* does not work */
```
char ar[n]; /* does not compile */
```
## malloc
```
#include <stdlib.h>
void *malloc(size_t size);
```
The malloc() function allocates size bytes and returns a pointer to the allocated
memory
The memory is not initialized
```
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    char *ar;

    n = 5;
    ar = malloc(n * sizeof(char));
    ar[0] = 'C';
    ar[1] = 'o';
    ar[2] = 'o';
    ar[3] = 'l';
    ar[4] = '\0';

    printf("%s\n", ar); /* prints Cool\n */

    return (0);
}
```
Memory state before n = 5;  

## free
When the allocated memory is not needed anymore, you must return it to the
operating system by calling the function free.
void free(void *ptr);
The free() function frees the memory space pointed to by ptr, which must have
been returned by a previous call to malloc(), calloc() or realloc().


## Never trust anyone
Sometimes, malloc fails. On error, malloc returns NULL.
Always check its return value.
