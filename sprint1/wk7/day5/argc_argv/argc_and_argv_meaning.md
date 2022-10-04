## What does int argc, char* argv[] mean?
https://www.youtube.com/watch?v=aP1ijjeZc24  

```
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("argc = %d\n", argc);
    return 0;
}

gcc nameoffile.c -o file

./file  (ds is where we get d argc value)

char* argv[] rep an arr of strings.

int main(int argc, char* argv[])
{
    int i = 0;

    printf("argc = %d\n", argc);
    printf("Let's see what is in argv[]\n");

    for (i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}

Practical uses
{
    int i = 0, sum;

    printf("argc = %d\n", argc);
    printf("Let's see what is in argv[]\n");

    if (argc > 1)
    {
        for (i = 0; i < argc; i++)
        {
            printf("argv[%d] = %s\n", i, argv[i]);
            sum += atoi(argv[i]);
        }

        printf("Total = %d\n", sum);
    }

    return 0;
}

```

