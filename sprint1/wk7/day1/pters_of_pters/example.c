#include <stdio.h>

int main() {
    int var;
    int *ptr;
    int **pptr;

    var = 3000;

    /* take d address of var*/
    ptr = &var;

    /* take d address of ptr using address operator & */
    pptr = &ptr;

    /* take d value using pptr */
    printf("Value of var = %d\n", var);
    printf("Value available at *ptr = %d\n", *ptr);
    printf("Value available at **pptr = %d\n", **pptr);

    return 0;
}
