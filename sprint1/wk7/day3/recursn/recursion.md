# Recursion
https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/2818ba6f14f644b871dcbd746925fa15b8cd5937.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220928%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220928T094352Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=28f20c88322102ab3d5f943d094ded62d911447dfc741bda48c5fe95d51958c1  

## Iterative programming
Iteration is the repetition of a block of statements (using a loop).  

## Recursion
Recursion is a method where the solution to a problem depends on solutions to smaller
instances of the same problem.  
A recursive function is a function that calls itself.  

# Factorial!
```
#include <stdio.h>

int factorial(int n)
{
    int res;
    int i;

    res = 1;
    i = 1;

    while (i <= n) 
    {
        res = res * i;
        i++;
    }

    return (res);
}


int main(void)
{
    int f;

    f = factorial(5);
    printf("5! = %d\n", f);

    return (0);
}
```

### Recursion
!n = !(n - 1);
factorial(n) = n * (factorial - 1);


### Iterative
Using a loop to iterate through all the letters.  
```
#include <unistd.h>

void print_char(char c)
{
    write(1, &c, 1);
}

void print_alphabet(void)
{
    char c;

    c = 'a';

    while (c <= 'z')
    {
        print_char(c);
        c = c + 1;
    }
}


int main(void)
{
    print_alphabet();
    print_char('\n');

    return (0);
}
```

### Recursion
```
#include <unistd.h>

void print_char(char c)
{
    write(1, &c, 1);
}

void print_all_letters_starting_from(char c)
{
    if (c > 'z')
    {
        return;
    }

    print_char(c);
    print_all_letters_starting_from(c + 1);
}

void print_alphabet(void)
{
    print_all_letters_starting_from('a');
}

int main(void)
{
    print_alphabet();
    print_char('\n');
    return (0);
}
```

