#include <stdio.h>

unsigned int sumDigits(unsigned int num)
{
    /*base case*/
    if (num == 0)
        return 0;

    return (num % 10) + (sumDigits(num / 10));

    /*
        (num % 10): returns d last digit i.e 3 +
        (sumDigits(num / 10)) removes d last digit from d number i.e 3
    */
}


int main(void) {
    printf("%i\n", sumDigits(53));

    return 0;
}