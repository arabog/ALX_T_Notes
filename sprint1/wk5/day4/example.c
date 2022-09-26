#include <stdio.h>


int main(void)
{
    int num;

    for(num = 0; num < 15; num++){
        if (num >= 10) {
            printf("%d\n", num);
            putchar((num / 10) + 48);
        }

        putchar((num % 10) + 48);
    }

    putchar('\n');
}