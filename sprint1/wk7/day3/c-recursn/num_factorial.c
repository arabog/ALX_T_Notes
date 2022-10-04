#include <stdio.h>

unsigned long long int factorial(unsigned int i) {
    if (i <= 1) {
        return 1;
    }

    return i * factorial(i - 1);
}


int main(void) {
    int i = 12;

    int k = factorial(i);

    printf("Factorial of %d is %d\n", i, k);
    return 0;
}