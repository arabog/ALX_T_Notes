#include <stdio.h>


/**
 * main - using sizeof to dynamically determine the size of types char, int and float
 *
 * Return: Always 0.
 */

 int main(void)
 {
    int n;
    int *num;

    printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
    printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
    printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
    printf("Size of type of my variable 'n' on my computer: %lu bytes\n", sizeof(n));

    printf("Size of type 'pointer' on my computer: %lu bytes\n", sizeof(num));

    return (0);
 }