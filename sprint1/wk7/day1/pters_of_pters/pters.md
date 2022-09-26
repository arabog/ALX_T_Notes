# C – Pointer to Pointer (Double Pointer) with example
https://beginnersbook.com/2014/01/c-pointer-to-pointer/  

We already know that a pointer holds the address of another variable of same type. When a pointer holds the address of another pointer then such type of pointer is known as pointer-to-pointer or double pointer.  

## How to declare a Pointer to Pointer (Double Pointer) in C?
```
int **pr;
```
Here pr is a double pointer. There must be two *’s in the declaration of double pointer.

## Example of double Pointer
```
#include <stdio.h>

int main()
{
    int num=123;

    //A normal pter pr2
    int *pr2;

    //ds pter pr1 is a double pter
    int **pr1;

    /* Assigning d address of variable num to d pter pr2 */

    pr2 = &num;


    /* Assigning d address of pter pr2 to d pter pr1 */

    pr1 = &pr2;

    /* Possible ways to find value of variable num*/
    printf("\n Value of num is: %d", num);
    printf("\n Value of num using pr2 is: %d", *pr2);
    printf("\n Value of num using pr1 is: %d", **pr1);

    /*Possible ways to find address of num*/
    printf("\n Address of num is: %p", &num);
    printf("\n Address of num using pr2 is: %p", pr2);
    printf("\n Address of num using pr1 is: %p", *pr1);

    /*Find value of pointer*/
    printf("\n Value of Pointer pr2 is: %P", pr2);
    printf("\n Value of Pointer pr2 using pr1 is: %p", *pr1);

    /*Ways to find address of pointer*/
    printf("\n Address of Pointer pr2 is: %p", &pr2);
    printf("\n Address of Pointer pr2 using pr1 is: %p", pr1);

    /*Double pointer value and address*/
    printf("\n Value of Pointer pr1 is: %p", pr1);
    printf("\n Address of Pointer pr1 is: %p", &pr1);

    return 0;
}
```