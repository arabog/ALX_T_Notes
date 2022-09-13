#include <stdio.h>

void add_to(int n, int inc_val, int vals[])
{
    int i;
    for (i = 0; i < n; i++) {
        vals[i] += inc_val;
    }
}

int main(void)
{
    int some_ints[] = {0, 1, 2, 3};
    int i;

    add_to(4, 2, some_ints);

}