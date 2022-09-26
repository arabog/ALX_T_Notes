#include <stdio.h>

/**
* main - storing the address of variable into a pointer
*
* Return: Always 0.
*/

int main(void)
{
    int n;
    int *p;

    n = 98;
    p = &n;

    printf("Address of 'n': %p\n", &n);
    printf("Value of 'p': %p\n", p);

    printf("Value of 'n': %i\n", n);
}

/*
Address of 'n': 0x7ffd6d0fd21c
Value of 'p': 0x7ffd6d0fd21c
Value of 'n': 98
*/