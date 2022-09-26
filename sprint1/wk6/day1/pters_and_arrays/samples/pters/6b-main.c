#include <stdio.h>

/**
 * modif_my_param - this function does not modify n
 * @m: a useless integer
 *
 * Return: nothing.
 */
void modif_my_param(int m)
{
    printf("=====modif_my_param======\n");
    printf("%d\n", m);
    m = 402;
    printf("%d\n", m);
}


/**
 * main - parameters are passed by value
 *
 * Return: Always 0.
 */
int main(void)
{
   int n;

   n = 98;
   printf("=====main======\n");
   printf("%d\n", n);
   modif_my_param(n);
   printf("=====back to main from modif_my_param======\n");
   printf("%d\n", n);
   return (0);
}