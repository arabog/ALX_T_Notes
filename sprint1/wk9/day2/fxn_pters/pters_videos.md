# Function Pointers in C / C++
https://www.youtube.com/watch?v=ynYtgGUNelE

pointers can pt to data.  
pointers can pt to fxns.  

fxn pters stores address of fxns means fxn pters stores d starting address or entry pt of d blk of memory containing all d instructns in a fxn. 

```
#include <stdio.h>

int Add(int a, int b)
{
    return a + b;
}
    
/* int *func(int, int); or int * func(int, int); or int* func(int, int); //declaring a fxn dt would return int* */

int main()
{
    int c;

    int (*p)(int, int); /* pter to fxn dt shd tk (int, int) as argumt/parameter & return int */
    p = &Add; /* ds p = Add; will also work */

    c = (*p)(2, 3); /* p(2, 3) // de-referencing and executing d fxn */

    printf("%d", c);
}

-------------------------------
void PrintHello()
{
    printf("Hello\n");
}

int main()
{
    void (*ptr)();
    ptr = PrintHello;
    ptr();
}

-------------------------------
void PrintHello(char *name)
{
    printf("Hello %s\n", name);
}

int main()
{
    void (*ptr)();
    ptr = PrintHello;
    ptr("Tom");
}
```

# Function pointers and callbacks - d use cases
https://www.youtube.com/watch?v=sxTFSDAZM8s  

fxn pters can be passed as argumts to fxns.  
```
#include <stdio.h>

void A()
{
    printf("Hello");
}

void B(void (*ptr)()) //fxn pter as argumt
{
    ptr();  // call-back fxn dt "ptr" pts to
}

int main()
{
    void (*p)() = A;

    B(p);

    or
    B(A);
}
```

Sort
```
#include <stdio.h>

void BubbleSort(int *A, int n)
{
    // simple bubble sort
    int i, j, temp;

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n - 1; j++)
        {
            if (A[j] > A[j + 1]) // compare A[j] with A[j + 1] and swap if needed
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int i, A[] = {3, 2, 1, 5, 6, 4}; // sort in increasing order => {1, 2, 3, 4, 5, 6}

    BubbleSort(A, 6);

    for (i = 0; i < 6; i++) {
        printf("%d ", A[i]);
    }
}
```

Using callback fxn
```
#include <stdio.h>

int compare(int a, int b)
{
    if (a > b) return -1;
    else return 1;
}

void BubbleSort(int *A, int n, int (*compare)(int, int))
{
    // simple bubble sort
    int i, j, temp;

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n - 1; j++)
        {
            if (compare(A[j] > A[j + 1]) > 0) // compare A[j] with A[j + 1] and swap if needed
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int i, A[] = {3, 2, 1, 5, 6, 4}; // sort in increasing order => {1, 2, 3, 4, 5, 6}

    BubbleSort(A, 6, compare);

    for (i = 0; i < 6; i++) {
        printf("%d ", A[i]);
    }
}
```
Sort values with both +ve and -ve values
```
#include <math.h>

int absolute_compare(int a, int b)
{
    if(abs(a) > abs(b)) return 1;
    return -1;
}

void BubbleSort(int *A, int n, int (*compare)(int, int))
{
    // simple bubble sort
    int i, j, temp;

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n - 1; j++)
        {
            if (compare(A[j] > A[j + 1]) > 0) // compare A[j] with A[j + 1] and swap if needed
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int i, A[] = {-31, 22, -1, 50, -6, 4}; // => {-1, 4, -6, 22, -31, 50}
    BubbleSort(A, 6, absolute_compare);
    for (i = 0; i < 6; i++) printf("%d ", A[i]);
}
```
Using qsort()
```
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    int A = *((int*)a); // typecasting to int* and getting value;
    int B = *((int*)b);

    return A - B;
}


int main()
{
    int i, A[] = {-31, 22, -1, 50, -6, 4}; // => {-1, 4, -6, 22, -31, 50}
    qsort(A, 6, sizeof(int), compare);

    for (i = 0; i < 6; i++) printf("%d ", A[i]);
}
```
