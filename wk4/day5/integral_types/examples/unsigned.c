#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int x;
    x = 0;

    while(x >= 0) {
        printf("%u\n", x);

        if(x == 100) {
            break;
        }
        
        x = x + 1;
    }

    exit(EXIT_SUCCESS);

    return (0);
}