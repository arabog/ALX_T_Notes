## 31. Nested While Loop: Make a Table in C
https://www.youtube.com/watch?v=Z3iGeQ1gIss  

Nested loops are loops within another loop.


## Learning to Program in C (Part 06)
https://www.youtube.com/watch?v=qMlnFwYdqIw  

```
#include <stdio.h>

int factorial(int n)
{
    int retval = 1;
    while(n != 1){
        retval *= n--;
    }

    return retval;
}

int main(void)
{
    int val = factorial(5);

    printf("%d! = %d\n", val);

    printf("%d! = %d", 4, factorial(4));
}

===========================
void printHello(char* name)
{
    printf("Hello there %s\n", name);
}

int printGoodbye(char* name)
{
    printf("Goodbye there %s\n", name);

    return(1); ?
}

int main(int argc, char* argv[]) 
{
    printHello("Bob");

    int i = printGoodbye("Alice");
    printf("printGoodbye returns %d\n", i);
}


==========================
#include <stdio.h>
#include <string.h>

void albert(char* name)
{
    int i = strlen(name);
    printf("%s consists of %d chars!\n", name, i);
}

int eistein(char* name)
{
    int i = strlen(name);
    albert(name);

    return(i);
}


int main(int argc, char* argv[]) 
{
    int i = einstein("brainfood");

    printf("einstein has IQ=%d\n", i);
}
```
local var of a fxn can also be defined as static.  
`static int i = 0;`  

### Recursion in C
```
#include <stdio.h>

int factorial(int n)
{
    int retval = 1;
    if(n != 1) {
        retval = n * factorial(n - 1);
    }

    return retval;
}

int main(void) 
{
    int val = factorial(5);

    printf("%d! = %d\n", 5, val);

    printf("%d! = %d\n", 4, factorial(4));
}
```
### Fxns and Arrays
```
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
```