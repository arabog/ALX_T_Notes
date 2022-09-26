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

    // num  -   int num=123; pr2 = &num; pr1 = &pr2;
    printf("\n== Possible ways to find value of variable num ==");
    printf("\n Value of num is: %d", num);
    printf("\n Value of num using pr2 is: %d", *pr2);
    printf("\n Value of num using pr1 is: %d", **pr1);

    printf("\n== Possible ways to find address of num ==");
    printf("\n Address of num is: %p", &num);
    printf("\n Address of num using pr2 is: %p", pr2);
    // pay attention here *pr1
    printf("\n Address of num using pr1 is: %p", *pr1); // pr1 = &(&num);

    // pointer  -   pr2 = &num; pr1 = &pr2;
    printf("\n== Find value of pointer ==");
    printf("\n Value of Pointer pr2 is: %p", pr2);
    printf("\n Value of Pointer pr2 using pr1 is: %p", *pr1);
    // pointer  -   pr2 = &num; pr1 = &pr2;
    printf("\n== Ways to find address of pointer ==");
    printf("\n Address of Pointer pr2 is: %p", &pr2);
    printf("\n Address of Pointer pr2 using pr1 is: %p", pr1);
    // pr1 = &pr2;
    printf("\n== Double pointer value and address ==");
    printf("\n Value of Pointer pr1 is: %p", pr1);
    printf("\n Address of Pointer pr1 is: %p\n", &pr1);

    return 0;
}
