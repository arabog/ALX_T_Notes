#include <stdio.h>
/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void){
    int e, i;
    e = 48;     //48 => 0
    i = 48;

    while (e < 58){
        i = 48;

        while (i < 58){     //58 => Shift (i.e d value after 9(57))
            if (e != i && e < i){
                putchar(i);
                putchar(e);

                // if (i == 57 && e == 56){    //57 => 9, 56 => 8
                //     break;
                // }

                putchar(',');
                putchar(' ');
            }

            i++;
        }

        e++;
    }

    putchar('\n');
    
    return (0);
}
