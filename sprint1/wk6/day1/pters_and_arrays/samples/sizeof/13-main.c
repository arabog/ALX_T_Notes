#include <stdio.h>

/**
* main - prints the address of an array
*
* Return: Always 0.
*/

int main(void)
{
    char b[98];

    printf("b: %p\n", b);
    printf("&b: %p\n", &b);

    printf("sizeof b: %lu\n", sizeof(b));
    printf("sizeof &b: %lu\n", sizeof(&b));


    return (0);
}
/*
b: 0x7ffe95e64a20
&b: 0x7ffe95e64a20

sizeof b: 98
sizeof &b: 8
*/