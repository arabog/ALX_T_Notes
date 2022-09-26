#include <stdio.h>
#include <stdlib.h>

int main() {
    int this_char, comman_count, stop_count;

    comman_count = stop_count = 0;

    this_char = getchar();

    while(this_char != EOF) {
        if(this_char == '.') 
            stop_count = stop_count + 1;
        if(this_char == ',')
            comman_count = comman_count + 1;
        this_char = getchar();
    }

    printf("%d commas, %d stops\n", comman_count, stop_count);

    exit(EXIT_SUCCESS);

    return (0);
}