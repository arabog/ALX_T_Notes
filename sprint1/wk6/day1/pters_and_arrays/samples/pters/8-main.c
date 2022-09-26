/* 
Using the same format, try to represent in memory what is 
happening at every step of the following program. When done, 
add some printfs and compile to verify your hypothesis.
*/

#include <stdio.h>

/**
* modif_my_char_var - Solve me
*
* Return: nothing.
*/

void modif_my_char_var(char *cc, char ccc)  
{
    *cc = 'o';
    ccc = 'l';
}

/**
* main - Solve me
*
* Return: Always 0.
*/

int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';
   printf("Values of 'p' and 'c' before: %p, %c\n", p, c);
   modif_my_char_var(p, c);
   printf("Values of 'p' and 'c' after: %p, %c\n", p, c);
   return (0);
}
